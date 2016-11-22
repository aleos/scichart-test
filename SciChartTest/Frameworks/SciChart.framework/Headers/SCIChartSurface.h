//
//  SciChartSurface.h
//  SciChart
//
//  Created by Admin on 23.07.15.
//  Copyright (c) 2016 SciChart Ltd. All rights reserved.
//

/** \addtogroup Visuals
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIInvalidatableElement.h"
#import "SCIRenderSurfaceCallbackDelegate.h"
#import <QuartzCore/QuartzCore.h>

@protocol SCIAxis2D;
@class SCIAxisCollection;
@protocol SCIDataSeries;
@protocol SCIViewportManager;
@protocol SCIChartModifier;
@protocol SCIAnnotation;
@class UIView;
@protocol SCIRenderableSeries;
@protocol SCIRenderSurface;
@class SCIRenderSurfaceStyle;
@protocol SCIRenderContext2D;

#pragma mark - SCIChartSurface protocol

@protocol SCIChartSurface <NSObject, SCIInvalidatableElement>

@property (nonatomic, strong) id<SCIChartModifier> chartModifier;
@property (nonatomic, strong) id<SCIAnnotation> annotation;

@property (nonatomic, strong) SCIAxisCollection * xAxes;
@property (nonatomic, strong) SCIAxisCollection * yAxes;

-(NSArray*) renderableSeries;
-(NSArray*) selectedRenderableSeries;

@property (nonatomic, strong) id<SCIViewportManager> viewportManager;
-(void) clearSeries;
-(CGRect) chartFrame;

-(void) detachRenderableSeries:(id<SCIRenderableSeries>)rSeries;
-(void) attachRenderableSeries:(id<SCIRenderableSeries>)rSeries;

-(void) attachAxis:(id<SCIAxis2D>)axis IsXAxis:(BOOL)isXAxis;
-(void) detachAxis:(id<SCIAxis2D>)axis;

-(UIView*) view;
-(UIView*) axesCanvas;
-(UIView*) modifierCanvas;

-(void) free;

@property (nonatomic, copy) NSString * chartTitle;
@property (nonatomic, weak) id<SCIRenderSurface> renderSurface;

-(void)drawBackground:(id<SCIRenderContext2D>)context;
@property (nonatomic, copy) SCIRenderSurfaceStyle * style;

+(void) setLicenseContract:(NSString *)licenseContract;

@end

@protocol SCIRenderableSeries;
@class SCIChartSurfaceViewBase;

#pragma mark - SCIChartSurface default implementation

@interface SCIChartSurface : NSObject <SCIChartSurface, SCIRenderSurfaceCallbackDelegate>

-(id) initWithView:(SCIChartSurfaceViewBase*)view;

/**
 * Exposes the default XAxis on the SCIChartSurface.
 * <p>You can add XAxis to the SCIChartSurface using the SCIChartSurface.attachAxis() function. Ensure that each SCIAxis2D instance has the SCIAxis2D.axisId property set!</p>
 * @see SCIAxis2D
 * @see SCINumericAxis
 * @see SCIDateTimeAxis
 * @see SCILogarithmicNumericAxis
 */
@property (nonatomic, strong) id<SCIAxis2D> xAxis;
/**
 * Exposes the default YAxis on the SCIChartSurface.
 * <p>You can add YAxis to the SCIChartSurface using the SCIChartSurface.attachAxis() function. Ensure that each SCIAxis2D instance has the SCIAxis2D.axisId property set!</p>
 * @see SCIAxis2D
 * @see SCINumericAxis
 * @see SCIDateTimeAxis
 * @see SCILogarithmicNumericAxis
 */
@property (nonatomic, strong) id<SCIAxis2D> yAxis;

/**
 *  The collection of XAxes when in a multiple Axis scenario.
 * <p>You can add XAxis to the SCIChartSurface using the SCIChartSurface.attachAxis() function. Ensure that each SCIAxis2D instance has the SCIAxis2D.axisId property set!</p>
 * @see SCIAxisCollection
 * @see SCIAxis2D
 * @see SCINumericAxis
 * @see SCIDateTimeAxis
 * @see SCILogarithmicNumericAxis
 */
@property (nonatomic, strong) SCIAxisCollection * xAxes;
/**
 *  The collection of YAxes when in a multiple Axis scenario. 
 * <p>You can add XAxis to the SCIChartSurface using the SCIChartSurface.attachAxis() function. Ensure that each SCIAxis2D instance has the SCIAxis2D.axisId property set!</p>
 * @see SCIAxisCollection
 * @see SCIAxis2D
 * @see SCINumericAxis
 * @see SCIDateTimeAxis
 * @see SCILogarithmicNumericAxis
 */
@property (nonatomic, strong) SCIAxisCollection * yAxes;

/**
 *  Defines the SCIChartModifier, responsible for zoom, pan or tooltip behaviors
 * <p>The SCIChartModifier API allows you to attach one or more modifiers (behaviors) to the SCIChartSurface. Behaviors can include zooming, panning, pinch zoom, legends, tooltips and more</p>
 * <p>It is possible group more than SCIChartModifier using the SCIModifierGroup type. It is also possible to define your own customer SCIChartModifier derived types.</p>
 * @code
 * // Defining ChartModifier in Objective C
 * SCIPinchZoomModifier * pzm = [[SCIPinchZoomModifier alloc] init];
 * SCIZoomExtentsModifier * zem = [[SCIZoomExtentsModifier alloc] init];
 * SCIRolloverModifier * rollover = [[SCIRolloverModifier alloc] init];
 *
 * [rollover setModifierName:@"Rollover Modifier"];
 * [zem setModifierName:@"ZoomExtents Modifier"];
 * [pzm setModifierName:@"PinchZoom Modifier"];
 * [yDragModifier setModifierName:@"YAxis Drag Modifier"];
 * [xDragModifier setModifierName:@"XAxis Drag Modifier"];
 *
 * SCIModifierGroup * gm = [[SCIModifierGroup alloc] initWithChildModifiers:@[xDragModifier, yDragModifier, pzm, zem, rollover]];
 * sciChartSurface.chartModifier = gm;
 * @endcode
 *
 * @code
 * // Defining ChartModifiers in Swift
 * let zem = SCIZoomExtentsModifier()
 * zem.modifierName = extendZoomModifierName
 *
 * let pzm = SCIPinchZoomModifier()
 * pzm.modifierName = pinchZoomModifierName
 *
 * let rollover = SCIRolloverModifier()
 * rollover.modifierName = rolloverModifierName
 *
 * let groupModifier = SCIModifierGroup(childModifiers: [pzm, zem, rollover])
 *
 * chartSurface.chartModifier = groupModifier
 * @endcode
 * @see SCIChartModifier
 * @see SCIChartModifierBase
 * @see SCIModifierGroup
 * @see SCIXAxisDragModifier
 * @see SCIYAxisDragModifier
 * @see SCIAxisPinchZoomModifier
 * @see SCIZoomPanModifier
 * @see SCIPinchZoomModifier
 * @see SCIZoomExtentsModifier
 * @see SCITooltipModifier
 * @see SCICursorModifier
 * @see SCIRolloverModifier
 * @see SCILegendModifier
 */
@property (nonatomic, strong) id<SCIChartModifier> chartModifier;

/**
 *  Attaches an annotation or a SCIAnnotationGroup to the SCIChartSurface
 * <p>Annotations can be used to add lines, text, boxes or markers onto the chart. The annotations update position as you zoom and pan the chart</p>
 * @code
 * // Objective-C Example
 * SCIBoxAnnotation * box = [[SCIBoxAnnotation alloc] init];
 * box.xStart = SCIGeneric(2.0);
 * box.yStart = SCIGeneric(2.0);
 * box.xEnd = SCIGeneric(4.0);
 * box.yEnd = SCIGeneric(4.0);
 * box.isEnabled = NO;
 * box.style.fillBrush = [[SCIBrushSolid alloc] initWithColorCode:0x30FF7000];
 *
 * SCILineAnnotation * lineAnnotation = [[SCILineAnnotation alloc] init];
 * lineAnnotation.xStart = SCIGeneric(1.0);
 * lineAnnotation.yStart = SCIGeneric(1.0);
 * lineAnnotation.xEnd = SCIGeneric(2.0);
 * lineAnnotation.yEnd = SCIGeneric(2.0);
 * lineAnnotation.style.linePen = [[SCIPenSolid alloc] initWithColorCode:0xFF4c8aff Width:2];
 *
 * SCITextAnnotation * textAnnotation = [[SCITextAnnotation alloc] init];
 * textAnnotation.xPosition = SCIGeneric(4.0);
 * textAnnotation.yPosition = SCIGeneric(5.0);
 * textAnnotation.text = @"An amazing TextAnnotation";
 * textAnnotation.style.textStyle = textFormatting;
 *
 * SCIAnnotationGroup * annotationGroup = [[SCIAnnotationGroup alloc]initWithChildAnnotations:@[box, lineAnnotation, textAnnotation]];
 * [surface setAnnotation:annotationGroup];
 * @endcode
 *
 * @code
 * // Swift example
 * var box = SCIBoxAnnotation()
 * box.xStart = SCIGeneric(2.0)
 * box.yStart = SCIGeneric(2.0)
 * box.xEnd = SCIGeneric(4.0)
 * box.yEnd = SCIGeneric(4.0)
 * box.isEnabled = false
 * box.style.fillBrush = SCIBrushSolid(colorCode: 0x30FF7000)
 *
 * var lineAnnotation = SCILineAnnotation()
 * lineAnnotation.xStart = SCIGeneric(1.0)
 * lineAnnotation.yStart = SCIGeneric(1.0)
 * lineAnnotation.xEnd = SCIGeneric(2.0)
 * lineAnnotation.yEnd = SCIGeneric(2.0)
 * lineAnnotation.style.linePen = SCIPenSolid(colorCode: 0xFF4c8aff, width: 2)
 *
 * var textAnnotation = SCITextAnnotation()
 * textAnnotation.xPosition = SCIGeneric(4.0)
 * textAnnotation.yPosition = SCIGeneric(5.0)
 * textAnnotation.text = "An amazing TextAnnotation"
 * textAnnotation.style.textStyle = textFormatting
 *
 * var annotationGroup = SCIAnnotationGroup(childAnnotations: [box, lineAnnotation, textAnnotation])
 * surface.annotation = annotationGroup
 * @code
 * @endcode
 * @see SCIAnnotation
 * @see SCILineAnnotation
 * @see SCIBoxAnnotation
 * @see SCITextAnnotation
 * @see SCIAnnotationGroup
 */
@property (nonatomic, strong) id<SCIAnnotation> annotation;

/**
 *  When true, clip annotations underneath the chart surface to the chart bounds
 */
@property (nonatomic) BOOL clipUnderlayAnnotations;
/**
 *  When true, clip annotations over the chart surface to the chart bounds
 */
@property (nonatomic) BOOL clipOverlayAnnotations;

@property (nonatomic, weak) SCIChartSurfaceViewBase * view;

/**
 *  Exposes the collection of SCIRenderableSeries on the SCIChartSurface
 * <p>RenderableSeries are the visual representation of the chart series, while SCIDataSeries are the data representation.</p>
 * <p>To add a series to a chart, use SCIChartSurface.attachRenderableSeries. Ensure that SCIRenderableSeries DataSeries is an instance of SCIDataSeries to provide the data</p>
 * @see SCIFastLineRenderableSeries
 * @see SCIDataSeries
 */
@property (nonatomic, strong) NSMutableArray * renderableSeries;
/**
 *  Exposes the collection of currently selected SCIRenderableSeries on the SCIChartSurface
 */
@property (nonatomic, strong) NSMutableArray * selectedRenderableSeries;

/**
 *  Defines the SCIViewportManager instance which controls the viewport ranges on chart updates. 
 * <p>This property is set to default instance which calculates X and YAxis ranges based on the SCIAxis2D.autoRange property</p>
 * @see SCIViewportManager
 */
@property (nonatomic, strong) id<SCIViewportManager> viewportManager;

@property (nonatomic) BOOL isPolarChart;

/**
 *  Detaches a SCIRenderableSeries from the SCIChartSurface
 *
 *  @param rSeries The SCIRenderableSeries instance to detach
 */
-(void) detachRenderableSeries:(id<SCIRenderableSeries>)rSeries;
/**
 *  Attachs a SCIRenderableSeries to the SciChartSurface.
 * <p>RenderableSeries are the visual representation of the chart series, while SCIDataSeries are the data representation.</p>
 * <p>To add a series to a chart, use SCIChartSurface.attachRenderableSeries. Ensure that SCIRenderableSeries DataSeries is an instance of SCIDataSeries to provide the data</p>
 * @code
 * // Objective-C Example
 * SCIXyDataSeries * lineDataSeries = [[SCIXyDataSeries alloc] initWithXType:SCIDataType_Float YType:SCIDataType_Float];
 * 
 * for (int i = 0; i < dataCount; i++) {
 * double time = 10 * i / (double)dataCount;
 * double x = time;
 * double y = arc4random_uniform(20);
 * [lineDataSeries appendX:SCIGeneric(x) Y:SCIGeneric(y)];
 * }
 * SCIFastLineRenderableSeries * lineRenderSeries = SCIFastLineRenderableSeries new];
 * [lineRenderSeries.style setLinePen: [[SCIPenSolid alloc] initWithColorCode:0xFF99EE99 Width:0.7]];
 * [lineRenderSeries setDataSeries:xyData];
 * [surface attachRenderableSeries:lineRenderSeries];
 * @endcode
 *
 * @code
 * // Swift Example
 * let lineDataSeries = SCIXyDataSeries(XType: .Float, YType: .Float)
 * let dataCount = 20
 * var i = 0
 * while i <= dataCount {
 * 	let x = 10.0*Float(i)/Float(dataCount)
 * 	let y = arc4random_uniform(UInt32(dataCount))
 *	var xValue = Float(x)
 *	var yValue = Float(y)
 *	dataSeries.appendX(SCI_constructGenericTypeWithInfo(&xValue, .Float),
 y: SCI_constructGenericTypeWithInfo(&yValue, .Float))
 *	i = i + 1
 * }
 * let lineRenderSeries = SCIFastLineRenderableSeries()
 * lineRenderSeries.dataSeries = dataSeries
 * lineRenderSeries.style.linePen = SCIPenSolid(colorCode: 0xFF99EE99, width: 0.7)
 * sciChartSurface.attachRenderableSeries(renderSeries)
 * @endcode
 * @see SCIFastLineRenderableSeries
 * @see SCIDataSeriest
 */
-(void) attachRenderableSeries:(id<SCIRenderableSeries>)rSeries;
/**
 *  Attaches a SCIAxis2D to the SCIChartSurface
 * <p>The SCIChartSurface requires that you attach at least one XAxis and a YAxis to the chart. SciChart supports unlimited, multiple, X and Y Axis.</p>
 * @code
 * // Objective C Example
 * id<SCIAxis2D> axis = [[SCINumericAxis alloc] init];
 * [axis setGrowBy: [[SCIDoubleRange alloc]initWithMin:SCIGeneric(0.1) Max:SCIGeneric(0.1)]];
 * [surface attachAxis:axis IsXAxis:NO];
 *
 * axis = [[SCINumericAxis alloc] init];
 * [surface attachAxis:axis IsXAxis:YES];
 * @endcode
 *
 * @code
 * // Swift Example
 * weak var axis = SCINumericAxis()
 * axis!.growBy = SCIDoubleRange(min: SCIGeneric(0.1), max: SCIGeneric(0.1))
 * surface.attachAxis(axis, isXAxis: false)
 * axis = SCINumericAxis()
 * surface.attachAxis(axis, isXAxis: true)
 * @endcode
 * @see SCIAxisCollection
 * @see SCIAxis2D
 * @see SCINumericAxis
 * @see SCIDateTimeAxis
 * @see SCILogarithmicNumericAxis
 */
-(void) attachAxis:(id<SCIAxis2D>)axis IsXAxis:(BOOL)isXAxis;

/**
 *  Detaches a SCIAxis2D instance from the SCIChartSurface
 *
 *  @param axis the SCIAxis2D instance to detach
 */
-(void) detachAxis:(id<SCIAxis2D>)axis;
/**
 *  Sets the chartTitle as a string
 */
@property (nonatomic, copy) NSString * chartTitle;
@property (nonatomic, weak) id<SCIRenderSurface> renderSurface;

@property (nonatomic, copy) SCIRenderSurfaceStyle * style;

/**
 *  Sets the License Key for all SCIChartSurface instances
 *  <p>For instructions of use, please see http://www.scichart.com/licensing-scichart-ios</p>
 *
 *  @param licenseContract <#licenseContract description#>
 */
+(void) setLicenseContract:(NSString *)licenseContract;

@end

/** @}*/
