/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/graphics_screen_screen/Graphics_ScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Graphics_ScreenViewBase::Graphics_ScreenViewBase()
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    graph_1_0.setScale(1);
    graph_1_0.setPosition(72, 16, 320, 240);
    graph_1_0.setGraphAreaMargin(0, 0, 0, 0);
    graph_1_0.setGraphAreaPadding(0, 0, 0, 0);
    graph_1_0.setGraphRangeY(0, 100);

    graph_1_0MinorXAxisGrid.setScale(1);
    graph_1_0MinorXAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_0MinorXAxisGrid.setInterval(5);
    graph_1_0MinorXAxisGrid.setLineWidth(1);
    graph_1_0MinorXAxisGrid.setMajorGrid(graph_1_0MajorXAxisGrid);
    graph_1_0.addGraphElement(graph_1_0MinorXAxisGrid);

    graph_1_0MinorYAxisGrid.setScale(1);
    graph_1_0MinorYAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_0MinorYAxisGrid.setInterval(5);
    graph_1_0MinorYAxisGrid.setLineWidth(1);
    graph_1_0MinorYAxisGrid.setMajorGrid(graph_1_0MajorYAxisGrid);
    graph_1_0.addGraphElement(graph_1_0MinorYAxisGrid);

    graph_1_0MajorXAxisGrid.setScale(1);
    graph_1_0MajorXAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_0MajorXAxisGrid.setInterval(10);
    graph_1_0MajorXAxisGrid.setLineWidth(1);
    graph_1_0.addGraphElement(graph_1_0MajorXAxisGrid);

    graph_1_0MajorYAxisGrid.setScale(1);
    graph_1_0MajorYAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_0MajorYAxisGrid.setInterval(10);
    graph_1_0MajorYAxisGrid.setLineWidth(1);
    graph_1_0.addGraphElement(graph_1_0MajorYAxisGrid);

    graph_1_0MajorXAxisLabel.setScale(1);
    graph_1_0MajorXAxisLabel.setInterval(10);
    graph_1_0MajorXAxisLabel.setLabelTypedText(touchgfx::TypedText(T_SINGLEUSEID4));
    graph_1_0MajorXAxisLabel.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_0.addBottomElement(graph_1_0MajorXAxisLabel);

    graph_1_0MajorYAxisLabel.setScale(1);
    graph_1_0MajorYAxisLabel.setInterval(10);
    graph_1_0MajorYAxisLabel.setLabelTypedText(touchgfx::TypedText(T_SINGLEUSEID3));
    graph_1_0MajorYAxisLabel.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_0.addLeftElement(graph_1_0MajorYAxisLabel);

    graph_1_0Line1.setScale(1);
    graph_1_0Line1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_0Line1.setPainter(graph_1_0Line1Painter);
    graph_1_0Line1.setLineWidth(2);
    graph_1_0.addGraphElement(graph_1_0Line1);

    graph_1_0.addDataPoint(40.2563148800466f);
    graph_1_0.addDataPoint(29.6424370494857f);
    graph_1_0.addDataPoint(19.0508244285072f);
    graph_1_0.addDataPoint(11.427710308952f);
    graph_1_0.addDataPoint(9.1762798812867f);
    graph_1_0.addDataPoint(13.5468865976581f);
    graph_1_0.addDataPoint(24.303051312244f);
    graph_1_0.addDataPoint(39.7461260444755f);
    graph_1_0.addDataPoint(57.0939143699357f);
    graph_1_0.addDataPoint(73.1220305780954f);
    graph_1_0.addDataPoint(84.9125593140336f);
    graph_1_0.addDataPoint(90.528345227907f);
    graph_1_0.addDataPoint(89.4494176183218f);
    graph_1_0.addDataPoint(82.6662137719341f);
    graph_1_0.addDataPoint(72.4081305951518f);
    graph_1_0.addDataPoint(61.5750208999105f);
    graph_1_0.addDataPoint(53.0117275517886f);
    graph_1_0.addDataPoint(48.8038911779248f);
    graph_1_0.addDataPoint(49.7677495595085f);
    graph_1_0.addDataPoint(55.2588250486717f);
    graph_1_0.addDataPoint(63.3460007354369f);
    graph_1_0.addDataPoint(71.3077144453355f);
    graph_1_0.addDataPoint(76.3278563991949f);
    graph_1_0.addDataPoint(76.2198069031014f);
    graph_1_0.addDataPoint(69.9999704106481f);
    graph_1_0.addDataPoint(58.1688618685819f);
    graph_1_0.addDataPoint(42.6293184570322f);
    graph_1_0.addDataPoint(26.2602415676226f);
    graph_1_0.addDataPoint(12.2486455379936f);
    graph_1_0.addDataPoint(3.34208474211014f);
    graph_1_0.addDataPoint(1.20318451975206f);
    graph_1_0.addDataPoint(6.02322359603883f);
    graph_1_0.addDataPoint(16.4885547274837f);
    graph_1_0.addDataPoint(30.1075544106215f);
    graph_1_0.addDataPoint(43.8178425956847f);
    graph_1_0.addDataPoint(54.725215047349f);
    graph_1_0.addDataPoint(60.7938058869629f);
    graph_1_0.addDataPoint(61.3192362288638f);
    graph_1_0.addDataPoint(57.069918607893f);
    graph_1_0.addDataPoint(50.0631597895584f);
    graph_1_0.addDataPoint(43.0323064101475f);
    graph_1_0.addDataPoint(38.7169493928267f);
    graph_1_0.addDataPoint(39.1515823751372f);
    graph_1_0.addDataPoint(45.128500570837f);
    graph_1_0.addDataPoint(55.9679902228182f);
    graph_1_0.addDataPoint(69.6535046760991f);
    graph_1_0.addDataPoint(83.2999772302119f);
    graph_1_0.addDataPoint(93.8416221766945f);
    graph_1_0.addDataPoint(98.771569550365f);
    graph_1_0.addDataPoint(96.752680296054f);
    graph_1_0.addDataPoint(87.9501120768672f);
    graph_1_0.addDataPoint(74.0040038085518f);
    graph_1_0.addDataPoint(57.6484463711758f);
    graph_1_0.addDataPoint(42.0692066764224f);
    graph_1_0.addDataPoint(30.1563777271943f);
    graph_1_0.addDataPoint(23.8336302878811f);
    graph_1_0.addDataPoint(23.6268177837924f);
    graph_1_0.addDataPoint(28.5759820026195f);
    graph_1_0.addDataPoint(36.5106721167552f);
    graph_1_0.addDataPoint(44.6195683662148f);
    graph_1_0.addDataPoint(50.1734209406798f);
    graph_1_0.addDataPoint(51.2229220834793f);
    graph_1_0.addDataPoint(47.0994685310653f);
    graph_1_0.addDataPoint(38.5952691932661f);
    graph_1_0.addDataPoint(27.7780503381227f);
    graph_1_0.addDataPoint(17.4853779287808f);
    graph_1_0.addDataPoint(10.62238293959f);
    graph_1_0.addDataPoint(9.43512945403415f);
    graph_1_0.addDataPoint(14.9381450981094f);
    graph_1_0.addDataPoint(26.6371717103154f);
    graph_1_0.addDataPoint(42.6161673169293f);
    graph_1_0.addDataPoint(59.9686161701041f);
    graph_1_0.addDataPoint(75.4690490904127f);
    graph_1_0.addDataPoint(86.3219677699528f);
    graph_1_0.addDataPoint(90.8064310606666f);
    graph_1_0.addDataPoint(88.6600765495241f);
    graph_1_0.addDataPoint(81.110044573055f);
    graph_1_0.addDataPoint(70.5445579746798f);
    graph_1_0.addDataPoint(59.9066862595877f);
    graph_1_0.addDataPoint(51.9595758983388f);
    graph_1_0.addDataPoint(48.6036119714468f);
    graph_1_0.addDataPoint(50.4129449735578f);
    graph_1_0.addDataPoint(56.5047865463783f);
    graph_1_0.addDataPoint(64.7730800437709f);
    graph_1_0.addDataPoint(72.428637326742f);
    graph_1_0.addDataPoint(76.7125206807556f);
    graph_1_0.addDataPoint(75.6067914748469f);
    graph_1_0.addDataPoint(68.3672085950834f);
    graph_1_0.addDataPoint(55.7459066688098f);
    graph_1_0.addDataPoint(39.847926458906f);
    graph_1_0.addDataPoint(23.6551003312576f);
    graph_1_0.addDataPoint(10.3322953118342f);
    graph_1_0.addDataPoint(2.48442643492293f);
    graph_1_0.addDataPoint(1.54487297700519f);
    graph_1_0.addDataPoint(7.44399465467075f);
    graph_1_0.addDataPoint(18.6381290461223f);
    graph_1_0.addDataPoint(32.4914950355452f);
    graph_1_0.addDataPoint(45.9173403835196f);
    graph_1_0.addDataPoint(56.1215256277602f);
    graph_1_0.addDataPoint(61.2669734845525f);

    graph_1_1.setScale(1);
    graph_1_1.setPosition(72, 16, 320, 240);
    graph_1_1.setGraphAreaMargin(0, 0, 0, 0);
    graph_1_1.setGraphAreaPadding(0, 0, 0, 0);
    graph_1_1.setGraphRangeY(0, 100);

    graph_1_1MinorXAxisGrid.setScale(1);
    graph_1_1MinorXAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_1MinorXAxisGrid.setInterval(5);
    graph_1_1MinorXAxisGrid.setLineWidth(1);
    graph_1_1MinorXAxisGrid.setMajorGrid(graph_1_1MajorXAxisGrid);
    graph_1_1.addGraphElement(graph_1_1MinorXAxisGrid);

    graph_1_1MinorYAxisGrid.setScale(1);
    graph_1_1MinorYAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_1MinorYAxisGrid.setInterval(5);
    graph_1_1MinorYAxisGrid.setLineWidth(1);
    graph_1_1MinorYAxisGrid.setMajorGrid(graph_1_1MajorYAxisGrid);
    graph_1_1.addGraphElement(graph_1_1MinorYAxisGrid);

    graph_1_1MajorXAxisGrid.setScale(1);
    graph_1_1MajorXAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_1MajorXAxisGrid.setInterval(10);
    graph_1_1MajorXAxisGrid.setLineWidth(1);
    graph_1_1.addGraphElement(graph_1_1MajorXAxisGrid);

    graph_1_1MajorYAxisGrid.setScale(1);
    graph_1_1MajorYAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_1MajorYAxisGrid.setInterval(10);
    graph_1_1MajorYAxisGrid.setLineWidth(1);
    graph_1_1.addGraphElement(graph_1_1MajorYAxisGrid);

    graph_1_1Line1.setScale(1);
    graph_1_1Line1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(235, 227, 6));
    graph_1_1Line1.setPainter(graph_1_1Line1Painter);
    graph_1_1Line1.setLineWidth(2);
    graph_1_1.addGraphElement(graph_1_1Line1);

    graph_1_1.addDataPoint(40.2563148800466f);
    graph_1_1.addDataPoint(29.6424370494857f);
    graph_1_1.addDataPoint(19.0508244285072f);
    graph_1_1.addDataPoint(11.427710308952f);
    graph_1_1.addDataPoint(9.1762798812867f);
    graph_1_1.addDataPoint(13.5468865976581f);
    graph_1_1.addDataPoint(24.303051312244f);
    graph_1_1.addDataPoint(39.7461260444755f);
    graph_1_1.addDataPoint(57.0939143699357f);
    graph_1_1.addDataPoint(73.1220305780954f);
    graph_1_1.addDataPoint(84.9125593140336f);
    graph_1_1.addDataPoint(90.528345227907f);
    graph_1_1.addDataPoint(89.4494176183218f);
    graph_1_1.addDataPoint(82.6662137719341f);
    graph_1_1.addDataPoint(72.4081305951518f);
    graph_1_1.addDataPoint(61.5750208999105f);
    graph_1_1.addDataPoint(53.0117275517886f);
    graph_1_1.addDataPoint(48.8038911779248f);
    graph_1_1.addDataPoint(49.7677495595085f);
    graph_1_1.addDataPoint(55.2588250486717f);
    graph_1_1.addDataPoint(63.3460007354369f);
    graph_1_1.addDataPoint(71.3077144453355f);
    graph_1_1.addDataPoint(76.3278563991949f);
    graph_1_1.addDataPoint(76.2198069031014f);
    graph_1_1.addDataPoint(69.9999704106481f);
    graph_1_1.addDataPoint(58.1688618685819f);
    graph_1_1.addDataPoint(42.6293184570322f);
    graph_1_1.addDataPoint(26.2602415676226f);
    graph_1_1.addDataPoint(12.2486455379936f);
    graph_1_1.addDataPoint(3.34208474211014f);
    graph_1_1.addDataPoint(1.20318451975206f);
    graph_1_1.addDataPoint(6.02322359603883f);
    graph_1_1.addDataPoint(16.4885547274837f);
    graph_1_1.addDataPoint(30.1075544106215f);
    graph_1_1.addDataPoint(43.8178425956847f);
    graph_1_1.addDataPoint(54.725215047349f);
    graph_1_1.addDataPoint(60.7938058869629f);
    graph_1_1.addDataPoint(61.3192362288638f);
    graph_1_1.addDataPoint(57.069918607893f);
    graph_1_1.addDataPoint(50.0631597895584f);
    graph_1_1.addDataPoint(43.0323064101475f);
    graph_1_1.addDataPoint(38.7169493928267f);
    graph_1_1.addDataPoint(39.1515823751372f);
    graph_1_1.addDataPoint(45.128500570837f);
    graph_1_1.addDataPoint(55.9679902228182f);
    graph_1_1.addDataPoint(69.6535046760991f);
    graph_1_1.addDataPoint(83.2999772302119f);
    graph_1_1.addDataPoint(93.8416221766945f);
    graph_1_1.addDataPoint(98.771569550365f);
    graph_1_1.addDataPoint(96.752680296054f);
    graph_1_1.addDataPoint(87.9501120768672f);
    graph_1_1.addDataPoint(74.0040038085518f);
    graph_1_1.addDataPoint(57.6484463711758f);
    graph_1_1.addDataPoint(42.0692066764224f);
    graph_1_1.addDataPoint(30.1563777271943f);
    graph_1_1.addDataPoint(23.8336302878811f);
    graph_1_1.addDataPoint(23.6268177837924f);
    graph_1_1.addDataPoint(28.5759820026195f);
    graph_1_1.addDataPoint(36.5106721167552f);
    graph_1_1.addDataPoint(44.6195683662148f);
    graph_1_1.addDataPoint(50.1734209406798f);
    graph_1_1.addDataPoint(51.2229220834793f);
    graph_1_1.addDataPoint(47.0994685310653f);
    graph_1_1.addDataPoint(38.5952691932661f);
    graph_1_1.addDataPoint(27.7780503381227f);
    graph_1_1.addDataPoint(17.4853779287808f);
    graph_1_1.addDataPoint(10.62238293959f);
    graph_1_1.addDataPoint(9.43512945403415f);
    graph_1_1.addDataPoint(14.9381450981094f);
    graph_1_1.addDataPoint(26.6371717103154f);
    graph_1_1.addDataPoint(42.6161673169293f);
    graph_1_1.addDataPoint(59.9686161701041f);
    graph_1_1.addDataPoint(75.4690490904127f);
    graph_1_1.addDataPoint(86.3219677699528f);
    graph_1_1.addDataPoint(90.8064310606666f);
    graph_1_1.addDataPoint(88.6600765495241f);
    graph_1_1.addDataPoint(81.110044573055f);
    graph_1_1.addDataPoint(70.5445579746798f);
    graph_1_1.addDataPoint(59.9066862595877f);
    graph_1_1.addDataPoint(51.9595758983388f);
    graph_1_1.addDataPoint(48.6036119714468f);
    graph_1_1.addDataPoint(50.4129449735578f);
    graph_1_1.addDataPoint(56.5047865463783f);
    graph_1_1.addDataPoint(64.7730800437709f);
    graph_1_1.addDataPoint(72.428637326742f);
    graph_1_1.addDataPoint(76.7125206807556f);
    graph_1_1.addDataPoint(75.6067914748469f);
    graph_1_1.addDataPoint(68.3672085950834f);
    graph_1_1.addDataPoint(55.7459066688098f);
    graph_1_1.addDataPoint(39.847926458906f);
    graph_1_1.addDataPoint(23.6551003312576f);
    graph_1_1.addDataPoint(10.3322953118342f);
    graph_1_1.addDataPoint(2.48442643492293f);
    graph_1_1.addDataPoint(1.54487297700519f);
    graph_1_1.addDataPoint(7.44399465467075f);
    graph_1_1.addDataPoint(18.6381290461223f);
    graph_1_1.addDataPoint(32.4914950355452f);
    graph_1_1.addDataPoint(45.9173403835196f);
    graph_1_1.addDataPoint(56.1215256277602f);
    graph_1_1.addDataPoint(61.2669734845525f);

    graph_1_2.setScale(1);
    graph_1_2.setPosition(72, 16, 320, 240);
    graph_1_2.setGraphAreaMargin(0, 0, 0, 0);
    graph_1_2.setGraphAreaPadding(0, 0, 0, 0);
    graph_1_2.setGraphRangeY(0, 100);

    graph_1_2MinorXAxisGrid.setScale(1);
    graph_1_2MinorXAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_2MinorXAxisGrid.setInterval(5);
    graph_1_2MinorXAxisGrid.setLineWidth(1);
    graph_1_2MinorXAxisGrid.setMajorGrid(graph_1_2MajorXAxisGrid);
    graph_1_2.addGraphElement(graph_1_2MinorXAxisGrid);

    graph_1_2MinorYAxisGrid.setScale(1);
    graph_1_2MinorYAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_2MinorYAxisGrid.setInterval(5);
    graph_1_2MinorYAxisGrid.setLineWidth(1);
    graph_1_2MinorYAxisGrid.setMajorGrid(graph_1_2MajorYAxisGrid);
    graph_1_2.addGraphElement(graph_1_2MinorYAxisGrid);

    graph_1_2MajorXAxisGrid.setScale(1);
    graph_1_2MajorXAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_2MajorXAxisGrid.setInterval(10);
    graph_1_2MajorXAxisGrid.setLineWidth(1);
    graph_1_2.addGraphElement(graph_1_2MajorXAxisGrid);

    graph_1_2MajorYAxisGrid.setScale(1);
    graph_1_2MajorYAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_2MajorYAxisGrid.setInterval(10);
    graph_1_2MajorYAxisGrid.setLineWidth(1);
    graph_1_2.addGraphElement(graph_1_2MajorYAxisGrid);

    graph_1_2Line1.setScale(1);
    graph_1_2Line1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(69, 237, 6));
    graph_1_2Line1.setPainter(graph_1_2Line1Painter);
    graph_1_2Line1.setLineWidth(2);
    graph_1_2.addGraphElement(graph_1_2Line1);

    graph_1_2.addDataPoint(40.2563148800466f);
    graph_1_2.addDataPoint(29.6424370494857f);
    graph_1_2.addDataPoint(19.0508244285072f);
    graph_1_2.addDataPoint(11.427710308952f);
    graph_1_2.addDataPoint(9.1762798812867f);
    graph_1_2.addDataPoint(13.5468865976581f);
    graph_1_2.addDataPoint(24.303051312244f);
    graph_1_2.addDataPoint(39.7461260444755f);
    graph_1_2.addDataPoint(57.0939143699357f);
    graph_1_2.addDataPoint(73.1220305780954f);
    graph_1_2.addDataPoint(84.9125593140336f);
    graph_1_2.addDataPoint(90.528345227907f);
    graph_1_2.addDataPoint(89.4494176183218f);
    graph_1_2.addDataPoint(82.6662137719341f);
    graph_1_2.addDataPoint(72.4081305951518f);
    graph_1_2.addDataPoint(61.5750208999105f);
    graph_1_2.addDataPoint(53.0117275517886f);
    graph_1_2.addDataPoint(48.8038911779248f);
    graph_1_2.addDataPoint(49.7677495595085f);
    graph_1_2.addDataPoint(55.2588250486717f);
    graph_1_2.addDataPoint(63.3460007354369f);
    graph_1_2.addDataPoint(71.3077144453355f);
    graph_1_2.addDataPoint(76.3278563991949f);
    graph_1_2.addDataPoint(76.2198069031014f);
    graph_1_2.addDataPoint(69.9999704106481f);
    graph_1_2.addDataPoint(58.1688618685819f);
    graph_1_2.addDataPoint(42.6293184570322f);
    graph_1_2.addDataPoint(26.2602415676226f);
    graph_1_2.addDataPoint(12.2486455379936f);
    graph_1_2.addDataPoint(3.34208474211014f);
    graph_1_2.addDataPoint(1.20318451975206f);
    graph_1_2.addDataPoint(6.02322359603883f);
    graph_1_2.addDataPoint(16.4885547274837f);
    graph_1_2.addDataPoint(30.1075544106215f);
    graph_1_2.addDataPoint(43.8178425956847f);
    graph_1_2.addDataPoint(54.725215047349f);
    graph_1_2.addDataPoint(60.7938058869629f);
    graph_1_2.addDataPoint(61.3192362288638f);
    graph_1_2.addDataPoint(57.069918607893f);
    graph_1_2.addDataPoint(50.0631597895584f);
    graph_1_2.addDataPoint(43.0323064101475f);
    graph_1_2.addDataPoint(38.7169493928267f);
    graph_1_2.addDataPoint(39.1515823751372f);
    graph_1_2.addDataPoint(45.128500570837f);
    graph_1_2.addDataPoint(55.9679902228182f);
    graph_1_2.addDataPoint(69.6535046760991f);
    graph_1_2.addDataPoint(83.2999772302119f);
    graph_1_2.addDataPoint(93.8416221766945f);
    graph_1_2.addDataPoint(98.771569550365f);
    graph_1_2.addDataPoint(96.752680296054f);
    graph_1_2.addDataPoint(87.9501120768672f);
    graph_1_2.addDataPoint(74.0040038085518f);
    graph_1_2.addDataPoint(57.6484463711758f);
    graph_1_2.addDataPoint(42.0692066764224f);
    graph_1_2.addDataPoint(30.1563777271943f);
    graph_1_2.addDataPoint(23.8336302878811f);
    graph_1_2.addDataPoint(23.6268177837924f);
    graph_1_2.addDataPoint(28.5759820026195f);
    graph_1_2.addDataPoint(36.5106721167552f);
    graph_1_2.addDataPoint(44.6195683662148f);
    graph_1_2.addDataPoint(50.1734209406798f);
    graph_1_2.addDataPoint(51.2229220834793f);
    graph_1_2.addDataPoint(47.0994685310653f);
    graph_1_2.addDataPoint(38.5952691932661f);
    graph_1_2.addDataPoint(27.7780503381227f);
    graph_1_2.addDataPoint(17.4853779287808f);
    graph_1_2.addDataPoint(10.62238293959f);
    graph_1_2.addDataPoint(9.43512945403415f);
    graph_1_2.addDataPoint(14.9381450981094f);
    graph_1_2.addDataPoint(26.6371717103154f);
    graph_1_2.addDataPoint(42.6161673169293f);
    graph_1_2.addDataPoint(59.9686161701041f);
    graph_1_2.addDataPoint(75.4690490904127f);
    graph_1_2.addDataPoint(86.3219677699528f);
    graph_1_2.addDataPoint(90.8064310606666f);
    graph_1_2.addDataPoint(88.6600765495241f);
    graph_1_2.addDataPoint(81.110044573055f);
    graph_1_2.addDataPoint(70.5445579746798f);
    graph_1_2.addDataPoint(59.9066862595877f);
    graph_1_2.addDataPoint(51.9595758983388f);
    graph_1_2.addDataPoint(48.6036119714468f);
    graph_1_2.addDataPoint(50.4129449735578f);
    graph_1_2.addDataPoint(56.5047865463783f);
    graph_1_2.addDataPoint(64.7730800437709f);
    graph_1_2.addDataPoint(72.428637326742f);
    graph_1_2.addDataPoint(76.7125206807556f);
    graph_1_2.addDataPoint(75.6067914748469f);
    graph_1_2.addDataPoint(68.3672085950834f);
    graph_1_2.addDataPoint(55.7459066688098f);
    graph_1_2.addDataPoint(39.847926458906f);
    graph_1_2.addDataPoint(23.6551003312576f);
    graph_1_2.addDataPoint(10.3322953118342f);
    graph_1_2.addDataPoint(2.48442643492293f);
    graph_1_2.addDataPoint(1.54487297700519f);
    graph_1_2.addDataPoint(7.44399465467075f);
    graph_1_2.addDataPoint(18.6381290461223f);
    graph_1_2.addDataPoint(32.4914950355452f);
    graph_1_2.addDataPoint(45.9173403835196f);
    graph_1_2.addDataPoint(56.1215256277602f);
    graph_1_2.addDataPoint(61.2669734845525f);

    graph_1_3.setScale(1);
    graph_1_3.setPosition(72, 16, 320, 240);
    graph_1_3.setGraphAreaMargin(0, 0, 0, 0);
    graph_1_3.setGraphAreaPadding(0, 0, 0, 0);
    graph_1_3.setGraphRangeY(0, 100);

    graph_1_3MinorXAxisGrid.setScale(1);
    graph_1_3MinorXAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_3MinorXAxisGrid.setInterval(5);
    graph_1_3MinorXAxisGrid.setLineWidth(1);
    graph_1_3MinorXAxisGrid.setMajorGrid(graph_1_3MajorXAxisGrid);
    graph_1_3.addGraphElement(graph_1_3MinorXAxisGrid);

    graph_1_3MinorYAxisGrid.setScale(1);
    graph_1_3MinorYAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_3MinorYAxisGrid.setInterval(5);
    graph_1_3MinorYAxisGrid.setLineWidth(1);
    graph_1_3MinorYAxisGrid.setMajorGrid(graph_1_3MajorYAxisGrid);
    graph_1_3.addGraphElement(graph_1_3MinorYAxisGrid);

    graph_1_3MajorXAxisGrid.setScale(1);
    graph_1_3MajorXAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_3MajorXAxisGrid.setInterval(10);
    graph_1_3MajorXAxisGrid.setLineWidth(1);
    graph_1_3.addGraphElement(graph_1_3MajorXAxisGrid);

    graph_1_3MajorYAxisGrid.setScale(1);
    graph_1_3MajorYAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    graph_1_3MajorYAxisGrid.setInterval(10);
    graph_1_3MajorYAxisGrid.setLineWidth(1);
    graph_1_3.addGraphElement(graph_1_3MajorYAxisGrid);

    graph_1_3Line1.setScale(1);
    graph_1_3Line1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(240, 7, 173));
    graph_1_3Line1.setPainter(graph_1_3Line1Painter);
    graph_1_3Line1.setLineWidth(2);
    graph_1_3.addGraphElement(graph_1_3Line1);

    graph_1_3.addDataPoint(40.2563148800466f);
    graph_1_3.addDataPoint(29.6424370494857f);
    graph_1_3.addDataPoint(19.0508244285072f);
    graph_1_3.addDataPoint(11.427710308952f);
    graph_1_3.addDataPoint(9.1762798812867f);
    graph_1_3.addDataPoint(13.5468865976581f);
    graph_1_3.addDataPoint(24.303051312244f);
    graph_1_3.addDataPoint(39.7461260444755f);
    graph_1_3.addDataPoint(57.0939143699357f);
    graph_1_3.addDataPoint(73.1220305780954f);
    graph_1_3.addDataPoint(84.9125593140336f);
    graph_1_3.addDataPoint(90.528345227907f);
    graph_1_3.addDataPoint(89.4494176183218f);
    graph_1_3.addDataPoint(82.6662137719341f);
    graph_1_3.addDataPoint(72.4081305951518f);
    graph_1_3.addDataPoint(61.5750208999105f);
    graph_1_3.addDataPoint(53.0117275517886f);
    graph_1_3.addDataPoint(48.8038911779248f);
    graph_1_3.addDataPoint(49.7677495595085f);
    graph_1_3.addDataPoint(55.2588250486717f);
    graph_1_3.addDataPoint(63.3460007354369f);
    graph_1_3.addDataPoint(71.3077144453355f);
    graph_1_3.addDataPoint(76.3278563991949f);
    graph_1_3.addDataPoint(76.2198069031014f);
    graph_1_3.addDataPoint(69.9999704106481f);
    graph_1_3.addDataPoint(58.1688618685819f);
    graph_1_3.addDataPoint(42.6293184570322f);
    graph_1_3.addDataPoint(26.2602415676226f);
    graph_1_3.addDataPoint(12.2486455379936f);
    graph_1_3.addDataPoint(3.34208474211014f);
    graph_1_3.addDataPoint(1.20318451975206f);
    graph_1_3.addDataPoint(6.02322359603883f);
    graph_1_3.addDataPoint(16.4885547274837f);
    graph_1_3.addDataPoint(30.1075544106215f);
    graph_1_3.addDataPoint(43.8178425956847f);
    graph_1_3.addDataPoint(54.725215047349f);
    graph_1_3.addDataPoint(60.7938058869629f);
    graph_1_3.addDataPoint(61.3192362288638f);
    graph_1_3.addDataPoint(57.069918607893f);
    graph_1_3.addDataPoint(50.0631597895584f);
    graph_1_3.addDataPoint(43.0323064101475f);
    graph_1_3.addDataPoint(38.7169493928267f);
    graph_1_3.addDataPoint(39.1515823751372f);
    graph_1_3.addDataPoint(45.128500570837f);
    graph_1_3.addDataPoint(55.9679902228182f);
    graph_1_3.addDataPoint(69.6535046760991f);
    graph_1_3.addDataPoint(83.2999772302119f);
    graph_1_3.addDataPoint(93.8416221766945f);
    graph_1_3.addDataPoint(98.771569550365f);
    graph_1_3.addDataPoint(96.752680296054f);
    graph_1_3.addDataPoint(87.9501120768672f);
    graph_1_3.addDataPoint(74.0040038085518f);
    graph_1_3.addDataPoint(57.6484463711758f);
    graph_1_3.addDataPoint(42.0692066764224f);
    graph_1_3.addDataPoint(30.1563777271943f);
    graph_1_3.addDataPoint(23.8336302878811f);
    graph_1_3.addDataPoint(23.6268177837924f);
    graph_1_3.addDataPoint(28.5759820026195f);
    graph_1_3.addDataPoint(36.5106721167552f);
    graph_1_3.addDataPoint(44.6195683662148f);
    graph_1_3.addDataPoint(50.1734209406798f);
    graph_1_3.addDataPoint(51.2229220834793f);
    graph_1_3.addDataPoint(47.0994685310653f);
    graph_1_3.addDataPoint(38.5952691932661f);
    graph_1_3.addDataPoint(27.7780503381227f);
    graph_1_3.addDataPoint(17.4853779287808f);
    graph_1_3.addDataPoint(10.62238293959f);
    graph_1_3.addDataPoint(9.43512945403415f);
    graph_1_3.addDataPoint(14.9381450981094f);
    graph_1_3.addDataPoint(26.6371717103154f);
    graph_1_3.addDataPoint(42.6161673169293f);
    graph_1_3.addDataPoint(59.9686161701041f);
    graph_1_3.addDataPoint(75.4690490904127f);
    graph_1_3.addDataPoint(86.3219677699528f);
    graph_1_3.addDataPoint(90.8064310606666f);
    graph_1_3.addDataPoint(88.6600765495241f);
    graph_1_3.addDataPoint(81.110044573055f);
    graph_1_3.addDataPoint(70.5445579746798f);
    graph_1_3.addDataPoint(59.9066862595877f);
    graph_1_3.addDataPoint(51.9595758983388f);
    graph_1_3.addDataPoint(48.6036119714468f);
    graph_1_3.addDataPoint(50.4129449735578f);
    graph_1_3.addDataPoint(56.5047865463783f);
    graph_1_3.addDataPoint(64.7730800437709f);
    graph_1_3.addDataPoint(72.428637326742f);
    graph_1_3.addDataPoint(76.7125206807556f);
    graph_1_3.addDataPoint(75.6067914748469f);
    graph_1_3.addDataPoint(68.3672085950834f);
    graph_1_3.addDataPoint(55.7459066688098f);
    graph_1_3.addDataPoint(39.847926458906f);
    graph_1_3.addDataPoint(23.6551003312576f);
    graph_1_3.addDataPoint(10.3322953118342f);
    graph_1_3.addDataPoint(2.48442643492293f);
    graph_1_3.addDataPoint(1.54487297700519f);
    graph_1_3.addDataPoint(7.44399465467075f);
    graph_1_3.addDataPoint(18.6381290461223f);
    graph_1_3.addDataPoint(32.4914950355452f);
    graph_1_3.addDataPoint(45.9173403835196f);
    graph_1_3.addDataPoint(56.1215256277602f);
    graph_1_3.addDataPoint(61.2669734845525f);

    add(__background);
    add(graph_1_0);
    add(graph_1_1);
    add(graph_1_2);
    add(graph_1_3);
}

void Graphics_ScreenViewBase::setupScreen()
{

}
