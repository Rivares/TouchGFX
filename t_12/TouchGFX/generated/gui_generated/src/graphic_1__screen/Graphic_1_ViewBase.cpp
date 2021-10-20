/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/graphic_1__screen/Graphic_1_ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Graphic_1_ViewBase::Graphic_1_ViewBase() :
    buttonCallback(this, &Graphic_1_ViewBase::buttonCallbackHandler),
    updateItemCallback(this, &Graphic_1_ViewBase::updateItemCallbackHandler)
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    background.setBitmap(touchgfx::Bitmap(BITMAP_COUNTER_BOX_ID));
    background.setPosition(0, 0, 480, 272);
    background.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    loggerSPI_1.setPosition(358, 43, 47, 27);
    loggerSPI_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    loggerSPI_1.setLinespacing(0);
    Unicode::snprintf(loggerSPI_1Buffer, LOGGERSPI_1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID15).getText());
    loggerSPI_1.setWildcard(loggerSPI_1Buffer);
    loggerSPI_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID2));

    b_toGraphic_2_Screen.setXY(418, 212);
    b_toGraphic_2_Screen.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_NEXT_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_NEXT_ARROW_32_ID));
    b_toGraphic_2_Screen.setIconXY(22, 15);
    b_toGraphic_2_Screen.setAction(buttonCallback);

    b_toGraphic_4_Screen.setXY(6, 213);
    b_toGraphic_4_Screen.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID));
    b_toGraphic_4_Screen.setIconXY(22, 15);
    b_toGraphic_4_Screen.setAction(buttonCallback);

    dg_AI_1.setScale(1);
    dg_AI_1.setPosition(69, 73, 336, 152);
    dg_AI_1.setGraphAreaMargin(7, 24, 0, 24);
    dg_AI_1.setGraphAreaPadding(0, 11, 0, 7);
    dg_AI_1.setGraphRangeY(0, 100);

    dg_AI_1MajorXAxisGrid.setScale(1);
    dg_AI_1MajorXAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    dg_AI_1MajorXAxisGrid.setInterval(25);
    dg_AI_1MajorXAxisGrid.setLineWidth(1);
    dg_AI_1.addGraphElement(dg_AI_1MajorXAxisGrid);

    dg_AI_1MajorYAxisGrid.setScale(1);
    dg_AI_1MajorYAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    dg_AI_1MajorYAxisGrid.setInterval(10);
    dg_AI_1MajorYAxisGrid.setLineWidth(1);
    dg_AI_1.addGraphElement(dg_AI_1MajorYAxisGrid);

    dg_AI_1MajorXAxisLabel.setScale(1);
    dg_AI_1MajorXAxisLabel.setInterval(15);
    dg_AI_1MajorXAxisLabel.setLabelTypedText(touchgfx::TypedText(T_TEXTID2));
    dg_AI_1MajorXAxisLabel.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    dg_AI_1.addBottomElement(dg_AI_1MajorXAxisLabel);

    dg_AI_1MajorYAxisLabel.setScale(1);
    dg_AI_1MajorYAxisLabel.setInterval(10);
    dg_AI_1MajorYAxisLabel.setLabelTypedText(touchgfx::TypedText(T_TEXTID2));
    dg_AI_1MajorYAxisLabel.setLabelDecimals(1);
    dg_AI_1MajorYAxisLabel.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    dg_AI_1.addLeftElement(dg_AI_1MajorYAxisLabel);

    dg_AI_1Line1.setScale(1);
    dg_AI_1Line1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(14, 186, 11));
    dg_AI_1Line1.setPainter(dg_AI_1Line1Painter);
    dg_AI_1Line1.setLineWidth(2);
    dg_AI_1.addGraphElement(dg_AI_1Line1);

    dg_AI_1.addDataPoint(49.0374745245392f);
    dg_AI_1.addDataPoint(56.01465965583f);
    dg_AI_1.addDataPoint(62.8097485516677f);
    dg_AI_1.addDataPoint(69.2183679775553f);
    dg_AI_1.addDataPoint(75.0507574642664f);
    dg_AI_1.addDataPoint(80.1389140048162f);
    dg_AI_1.addDataPoint(84.3428771286216f);
    dg_AI_1.addDataPoint(87.555906403363f);
    dg_AI_1.addDataPoint(89.7083475679627f);
    dg_AI_1.addDataPoint(90.7700356033687f);
    dg_AI_1.addDataPoint(90.7511413805299f);
    dg_AI_1.addDataPoint(89.7014303724297f);
    dg_AI_1.addDataPoint(87.7079651612485f);
    dg_AI_1.addDataPoint(84.8913452990256f);
    dg_AI_1.addDataPoint(81.4006363212462f);
    dg_AI_1.addDataPoint(77.4071917458769f);
    dg_AI_1.addDataPoint(73.0976158208955f);
    dg_AI_1.addDataPoint(68.6661489712154f);
    dg_AI_1.addDataPoint(64.3067805418659f);
    dg_AI_1.addDataPoint(60.2054042713878f);
    dg_AI_1.addDataPoint(56.5323299050004f);
    dg_AI_1.addDataPoint(53.4354499653413f);
    dg_AI_1.addDataPoint(51.0343344299204f);
    dg_AI_1.addDataPoint(49.4154887419215f);
    dg_AI_1.addDataPoint(48.6289640915472f);
    dg_AI_1.addDataPoint(48.6864546994161f);
    dg_AI_1.addDataPoint(49.5609573731847f);
    dg_AI_1.addDataPoint(51.1880061067128f);
    dg_AI_1.addDataPoint(53.4684314939582f);
    dg_AI_1.addDataPoint(56.2725337299362f);
    dg_AI_1.addDataPoint(59.4455014206644f);
    dg_AI_1.addDataPoint(62.8138586331153f);
    dg_AI_1.addDataPoint(66.1926813201594f);
    dg_AI_1.addDataPoint(69.3932935862475f);
    dg_AI_1.addDataPoint(72.2311348406418f);
    dg_AI_1.addDataPoint(74.5334819976665f);
    dg_AI_1.addDataPoint(76.1467165769231f);
    dg_AI_1.addDataPoint(76.9428444716112f);
    dg_AI_1.addDataPoint(76.825006024559f);
    dg_AI_1.addDataPoint(75.7317540540768f);
    dg_AI_1.addDataPoint(73.6399266579818f);
    dg_AI_1.addDataPoint(70.5659975655837f);
    dg_AI_1.addDataPoint(66.5658474416876f);
    dg_AI_1.addDataPoint(61.7329625432146f);
    dg_AI_1.addDataPoint(56.1951298035133f);
    dg_AI_1.addDataPoint(50.1097574295923f);
    dg_AI_1.addDataPoint(43.6580048508957f);
    dg_AI_1.addDataPoint(37.0379535193865f);
    dg_AI_1.addDataPoint(30.4570882439813f);
    dg_AI_1.addDataPoint(24.1243864249417f);
    dg_AI_1.addDataPoint(18.2423282509152f);
    dg_AI_1.addDataPoint(12.9991441611126f);
    dg_AI_1.addDataPoint(8.5616066793907f);
    dg_AI_1.addDataPoint(5.06865199778704f);
    dg_AI_1.addDataPoint(2.62608394625249f);
    dg_AI_1.addDataPoint(1.30256988716075f);
    dg_AI_1.addDataPoint(1.12708680974271f);
    dg_AI_1.addDataPoint(2.08791826718391f);
    dg_AI_1.addDataPoint(4.13324116967123f);
    dg_AI_1.addDataPoint(7.17327827852173f);
    dg_AI_1.addDataPoint(11.0839300189141f);
    dg_AI_1.addDataPoint(15.7117405205691f);
    dg_AI_1.addDataPoint(20.8799997342966f);
    dg_AI_1.addDataPoint(26.3957385150662f);
    dg_AI_1.addDataPoint(32.0573380629567f);
    dg_AI_1.addDataPoint(37.6624509154938f);
    dg_AI_1.addDataPoint(43.0159184778572f);
    dg_AI_1.addDataPoint(47.9373703400501f);
    dg_AI_1.addDataPoint(52.2682036505565f);
    dg_AI_1.addDataPoint(55.8776655947952f);
    dg_AI_1.addDataPoint(58.6677980482466f);
    dg_AI_1.addDataPoint(60.5770490102293f);
    dg_AI_1.addDataPoint(61.5824086920131f);
    dg_AI_1.addDataPoint(61.6999871430185f);
    dg_AI_1.addDataPoint(60.984012567558f);
    dg_AI_1.addDataPoint(59.524292562486f);
    dg_AI_1.addDataPoint(57.4422418856378f);
    dg_AI_1.addDataPoint(54.8856376451528f);
    dg_AI_1.addDataPoint(52.0223135609412f);
    dg_AI_1.addDataPoint(49.0330473682281f);
    dg_AI_1.addDataPoint(46.1039276156235f);
    dg_AI_1.addDataPoint(43.4185068397417f);
    dg_AI_1.addDataPoint(41.1500567814138f);
    dg_AI_1.addDataPoint(39.4542370392538f);
    dg_AI_1.addDataPoint(38.4624722050879f);
    dg_AI_1.addDataPoint(38.2763041742364f);
    dg_AI_1.addDataPoint(38.9629473678343f);
    dg_AI_1.addDataPoint(40.5522266518155f);
    dg_AI_1.addDataPoint(43.0350224213828f);
    dg_AI_1.addDataPoint(46.3632872286327f);
    dg_AI_1.addDataPoint(50.4516354771435f);
    dg_AI_1.addDataPoint(55.1804449088729f);
    dg_AI_1.addDataPoint(60.4003481550625f);
    dg_AI_1.addDataPoint(65.9379370928488f);
    dg_AI_1.addDataPoint(71.6024541609717f);
    dg_AI_1.addDataPoint(77.1932052954283f);
    dg_AI_1.addDataPoint(82.5074002294063f);
    dg_AI_1.addDataPoint(87.3481085377255f);
    dg_AI_1.addDataPoint(91.5320151497305f);
    dg_AI_1.addDataPoint(94.8966666877703f);
    dg_AI_1.addDataPoint(97.3069201678395f);
    dg_AI_1.addDataPoint(98.6603371639433f);
    dg_AI_1.addDataPoint(98.8913083073844f);
    dg_AI_1.addDataPoint(97.9737434717277f);
    dg_AI_1.addDataPoint(95.9222198864558f);
    dg_AI_1.addDataPoint(92.7915417364064f);
    dg_AI_1.addDataPoint(88.674727891895f);
    dg_AI_1.addDataPoint(83.6995069048052f);
    dg_AI_1.addDataPoint(78.0234576693429f);
    dg_AI_1.addDataPoint(71.827988030418f);
    dg_AI_1.addDataPoint(65.3113896996928f);
    dg_AI_1.addDataPoint(58.6812445008501f);
    dg_AI_1.addDataPoint(52.1464827486915f);
    dg_AI_1.addDataPoint(45.9094081679297f);
    dg_AI_1.addDataPoint(40.1580050758825f);
    dg_AI_1.addDataPoint(35.0588321116174f);
    dg_AI_1.addDataPoint(30.7507833306165f);
    dg_AI_1.addDataPoint(27.3399628470836f);
    dg_AI_1.addDataPoint(24.895874688794f);
    dg_AI_1.addDataPoint(23.4490771023638f);
    dg_AI_1.addDataPoint(22.9903921002363f);
    dg_AI_1.addDataPoint(23.4716990155151f);
    dg_AI_1.addDataPoint(24.8082776881961f);
    dg_AI_1.addDataPoint(26.8826051885147f);
    dg_AI_1.addDataPoint(29.5494519796248f);
    dg_AI_1.addDataPoint(32.6420717496707f);
    dg_AI_1.addDataPoint(35.9792356046336f);
    dg_AI_1.addDataPoint(39.3728276702691f);
    dg_AI_1.addDataPoint(42.6356969767286f);
    dg_AI_1.addDataPoint(45.5894502918421f);
    dg_AI_1.addDataPoint(48.0718731237155f);
    dg_AI_1.addDataPoint(49.9436811000484f);
    dg_AI_1.addDataPoint(51.0943306743232f);
    dg_AI_1.addDataPoint(51.4466559278639f);
    dg_AI_1.addDataPoint(50.9601450974123f);
    dg_AI_1.addDataPoint(49.6327249406091f);
    dg_AI_1.addDataPoint(47.5009807174185f);
    dg_AI_1.addDataPoint(44.6388021411254f);
    dg_AI_1.addDataPoint(41.1545086020199f);
    dg_AI_1.addDataPoint(37.1865678297088f);
    dg_AI_1.addDataPoint(32.8980784464928f);
    dg_AI_1.addDataPoint(28.470236319111f);
    dg_AI_1.addDataPoint(24.0950454522951f);
    dg_AI_1.addDataPoint(19.9675643565289f);
    dg_AI_1.addDataPoint(16.2779977080383f);
    dg_AI_1.addDataPoint(13.2039493882942f);
    dg_AI_1.addDataPoint(10.9031467852343f);
    dg_AI_1.addDataPoint(9.50692772301683f);
    dg_AI_1.addDataPoint(9.11475103529133f);
    dg_AI_1.addDataPoint(9.78995132210534f);
    dg_AI_1.addDataPoint(11.5569088807797f);
    dg_AI_1.addDataPoint(14.3997496083979f);
    dg_AI_1.addDataPoint(18.2626287897035f);
    dg_AI_1.addDataPoint(23.0515897152233f);
    dg_AI_1.addDataPoint(28.637925359211f);
    dg_AI_1.addDataPoint(34.8629115640197f);
    dg_AI_1.addDataPoint(41.5437255904353f);
    dg_AI_1.addDataPoint(48.4803166651464f);
    dg_AI_1.addDataPoint(55.462957352572f);
    dg_AI_1.addDataPoint(62.2801773369357f);
    dg_AI_1.addDataPoint(68.7267661066592f);
    dg_AI_1.addDataPoint(74.6115282416731f);
    dg_AI_1.addDataPoint(79.7644847991571f);
    dg_AI_1.addDataPoint(84.0432364475325f);
    dg_AI_1.addDataPoint(87.3382372791724f);
    dg_AI_1.addDataPoint(89.5767716510745f);
    dg_AI_1.addDataPoint(90.7254779933805f);
    dg_AI_1.addDataPoint(90.7913213800524f);
    dg_AI_1.addDataPoint(89.8209783644669f);
    dg_AI_1.addDataPoint(87.8986607732278f);
    dg_AI_1.addDataPoint(85.1424672289092f);
    dg_AI_1.addDataPoint(81.699409705744f);
    dg_AI_1.addDataPoint(77.7393151319922f);
    dg_AI_1.addDataPoint(73.447846612446f);
    dg_AI_1.addDataPoint(69.0189238967452f);
    dg_AI_1.addDataPoint(64.6468463692204f);
    dg_AI_1.addDataPoint(60.5184335013116f);
    dg_AI_1.addDataPoint(56.8054968925937f);
    dg_AI_1.addDataPoint(53.6579444535708f);
    dg_AI_1.addDataPoint(51.1977920030303f);
    dg_AI_1.addDataPoint(49.5143210614497f);
    dg_AI_1.addDataPoint(48.6605757428909f);
    dg_AI_1.addDataPoint(48.6513380627465f);
    dg_AI_1.addDataPoint(49.4626617815034f);
    dg_AI_1.addDataPoint(51.032982601775f);
    dg_AI_1.addDataPoint(53.2657594379632f);
    dg_AI_1.addDataPoint(56.0335403008503f);
    dg_AI_1.addDataPoint(59.1832892606996f);
    dg_AI_1.addDataPoint(62.5427606186721f);
    dg_AI_1.addDataPoint(65.9276643524342f);
    dg_AI_1.addDataPoint(69.1493352871269f);
    dg_AI_1.addDataPoint(72.0225982303914f);
    dg_AI_1.addDataPoint(74.3735132216207f);
    dg_AI_1.addDataPoint(76.0466898971862f);
    dg_AI_1.addDataPoint(76.9118768558625f);
    dg_AI_1.addDataPoint(76.8695608608631f);
    dg_AI_1.addDataPoint(75.8553500368873f);
    dg_AI_1.addDataPoint(73.8429636372501f);
    dg_AI_1.addDataPoint(70.845706530943f);
    dg_AI_1.addDataPoint(66.9163668459528f);
    dg_AI_1.addDataPoint(62.1455381538584f);
    dg_AI_1.addDataPoint(56.658430313483f);
    dg_AI_1.addDataPoint(50.6102934716114f);
    dg_AI_1.addDataPoint(44.1806349164675f);
    dg_AI_1.addDataPoint(37.5664568081661f);
    dg_AI_1.addDataPoint(30.9747818260429f);
    dg_AI_1.addDataPoint(24.6147622696723f);
    dg_AI_1.addDataPoint(18.6896849288007f);
    dg_AI_1.addDataPoint(13.3891881962315f);
    dg_AI_1.addDataPoint(8.88199972500125f);
    dg_AI_1.addDataPoint(5.30948219748218f);
    dg_AI_1.addDataPoint(2.78024277788553f);
    dg_AI_1.addDataPoint(1.36601961521503f);
    dg_AI_1.addDataPoint(1.09900797190214f);
    dg_AI_1.addDataPoint(1.97073140707047f);
    dg_AI_1.addDataPoint(3.93250201170299f);
    dg_AI_1.addDataPoint(6.89745058694676f);
    dg_AI_1.addDataPoint(10.744045225506f);
    dg_AI_1.addDataPoint(15.3209577092504f);
    dg_AI_1.addDataPoint(20.4530835420042f);
    dg_AI_1.addDataPoint(25.9484757073758f);
    dg_AI_1.addDataPoint(31.6059160633673f);
    dg_AI_1.addDataPoint(37.2228229742267f);
    dg_AI_1.addDataPoint(42.6031807353121f);
    dg_AI_1.addDataPoint(47.5651755473194f);
    dg_AI_1.addDataPoint(51.9482347850668f);
    dg_AI_1.addDataPoint(55.6191902892899f);
    dg_AI_1.addDataPoint(58.4773214315921f);
    dg_AI_1.addDataPoint(60.4580786734764f);
    dg_AI_1.addDataPoint(61.5353409838762f);
    dg_AI_1.addDataPoint(61.7221191797407f);
    dg_AI_1.addDataPoint(61.0696792754894f);
    dg_AI_1.addDataPoint(59.6651231210284f);
    dg_AI_1.addDataPoint(57.6275251467302f);
    dg_AI_1.addDataPoint(55.1027817443767f);
    dg_AI_1.addDataPoint(52.2573812256996f);
    dg_AI_1.addDataPoint(49.271345319671f);
    dg_AI_1.addDataPoint(46.3306263876101f);
    dg_AI_1.addDataPoint(43.6192660746697f);
    dg_AI_1.addDataPoint(41.3116308431967f);
    dg_AI_1.addDataPoint(39.5650366213915f);
    dg_AI_1.addDataPoint(38.5130592780695f);
    dg_AI_1.addDataPoint(38.259800368717f);
    dg_AI_1.addDataPoint(38.8753392915009f);
    dg_AI_1.addDataPoint(40.3925557701353f);
    dg_AI_1.addDataPoint(42.8054517457372f);
    dg_AI_1.addDataPoint(46.0690419645378f);
    dg_AI_1.addDataPoint(50.1008198320327f);
    dg_AI_1.addDataPoint(54.7837421972335f);
    dg_AI_1.addDataPoint(59.9706160227567f);

    b_toControlScreen.setXY(137, 225);
    b_toControlScreen.setBitmaps(touchgfx::Bitmap(BITMAP_B_CONTROL_0_ID), touchgfx::Bitmap(BITMAP_B_CONTROL_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_toControlScreen.setIconXY(0, 0);
    b_toControlScreen.setAction(buttonCallback);

    b_toLoginScreen.setXY(66, 225);
    b_toLoginScreen.setBitmaps(touchgfx::Bitmap(BITMAP_B_LOGIN_0_ID), touchgfx::Bitmap(BITMAP_B_LOGIN_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_toLoginScreen.setIconXY(0, 0);
    b_toLoginScreen.setAction(buttonCallback);

    b_toDiscretScreen.setXY(213, 225);
    b_toDiscretScreen.setBitmaps(touchgfx::Bitmap(BITMAP_B_DISCRET_0_ID), touchgfx::Bitmap(BITMAP_B_DISCRET_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_toDiscretScreen.setIconXY(0, 0);
    b_toDiscretScreen.setAction(buttonCallback);

    b_toAnalyticScreen.setXY(288, 225);
    b_toAnalyticScreen.setBitmaps(touchgfx::Bitmap(BITMAP_B_ANALYTICS_0_ID), touchgfx::Bitmap(BITMAP_B_ANALYTICS_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_toAnalyticScreen.setIconXY(0, 0);
    b_toAnalyticScreen.setAction(buttonCallback);

    b_toArchiveScreen.setXY(358, 225);
    b_toArchiveScreen.setBitmaps(touchgfx::Bitmap(BITMAP_B_ARHIVE_0_ID), touchgfx::Bitmap(BITMAP_B_ARHIVE_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_toArchiveScreen.setIconXY(0, 0);
    b_toArchiveScreen.setAction(buttonCallback);

    si_title_AI_1.setBitmap(touchgfx::Bitmap(BITMAP_T_TITLE_AI_1_ID));
    si_title_AI_1.setPosition(141, 45, 198, 23);
    si_title_AI_1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    sw_unit_AI_1.setPosition(69, 39, 52, 35);
    sw_unit_AI_1.setHorizontal(false);
    sw_unit_AI_1.setCircular(false);
    sw_unit_AI_1.setEasingEquation(touchgfx::EasingEquations::backEaseOut);
    sw_unit_AI_1.setSwipeAcceleration(10);
    sw_unit_AI_1.setDragAcceleration(10);
    sw_unit_AI_1.setNumberOfItems(10);
    sw_unit_AI_1.setSelectedItemOffset(0);
    sw_unit_AI_1.setDrawableSize(105, 0);
    sw_unit_AI_1.setDrawables(sw_unit_AI_1ListItems, updateItemCallback);
    sw_unit_AI_1.animateToItem(0, 0);

    b_Settings.setXY(414, 8);
    b_Settings.setBitmaps(touchgfx::Bitmap(BITMAP_B_BACKGROUND_WHITE_52_35_ID), touchgfx::Bitmap(BITMAP_B_BACKGROUND_GREEN_52_35_ID), touchgfx::Bitmap(BITMAP_SETTINGS_ICON_0_ID), touchgfx::Bitmap(BITMAP_SETTINGS_ICON_1_ID));
    b_Settings.setIconXY(5, 5);

    b_DI_1.setXY(6, 59);
    b_DI_1.setBitmaps(touchgfx::Bitmap(BITMAP_DI1_0_ID), touchgfx::Bitmap(BITMAP_DI1_1_ID));

    b_DI_2.setXY(6, 98);
    b_DI_2.setBitmaps(touchgfx::Bitmap(BITMAP_DI2_0_ID), touchgfx::Bitmap(BITMAP_DI2_1_ID));

    b_DI_3.setXY(6, 138);
    b_DI_3.setBitmaps(touchgfx::Bitmap(BITMAP_DI3_0_ID), touchgfx::Bitmap(BITMAP_DI3_1_ID));

    b_DI_4.setXY(6, 178);
    b_DI_4.setBitmaps(touchgfx::Bitmap(BITMAP_DI4_0_ID), touchgfx::Bitmap(BITMAP_DI4_1_ID));

    b_DO_1.setXY(414, 59);
    b_DO_1.setBitmaps(touchgfx::Bitmap(BITMAP_DO1_0_ID), touchgfx::Bitmap(BITMAP_DO1_1_ID));

    b_DO_2.setXY(414, 98);
    b_DO_2.setBitmaps(touchgfx::Bitmap(BITMAP_DO2_0_ID), touchgfx::Bitmap(BITMAP_DO2_1_ID));

    b_DO_3.setXY(414, 138);
    b_DO_3.setBitmaps(touchgfx::Bitmap(BITMAP_DO3_0_ID), touchgfx::Bitmap(BITMAP_DO3_1_ID));

    b_DO_4.setXY(414, 178);
    b_DO_4.setBitmaps(touchgfx::Bitmap(BITMAP_DO4_0_ID), touchgfx::Bitmap(BITMAP_DO4_1_ID));

    logo.setBitmap(touchgfx::Bitmap(BITMAP_DIR4069_BRAND6_ID));
    logo.setPosition(170, 8, 141, 15);
    logo.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    lb_date.setPosition(78, 1, 83, 24);
    lb_date.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    lb_date.setLinespacing(0);
    Unicode::snprintf(lb_dateBuffer, LB_DATE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID109).getText());
    lb_date.setWildcard(lb_dateBuffer);
    lb_date.setTypedText(touchgfx::TypedText(T_SINGLEUSEID108));

    lb_time.setPosition(8, 1, 70, 24);
    lb_time.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    lb_time.setLinespacing(0);
    Unicode::snprintf(lb_timeBuffer, LB_TIME_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID111).getText());
    lb_time.setWildcard(lb_timeBuffer);
    lb_time.setTypedText(touchgfx::TypedText(T_SINGLEUSEID110));

    l_SP_AI_1.setPosition(101, 145, 304, 50);
    l_SP_AI_1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    l_SP_AI_1.setPainter(l_SP_AI_1Painter);
    l_SP_AI_1.setStart(5, 0);
    l_SP_AI_1.setEnd(350, 0);
    l_SP_AI_1.setLineWidth(3);
    l_SP_AI_1.setLineEndingStyle(touchgfx::Line::SQUARE_CAP_ENDING);

    add(__background);
    add(background);
    add(loggerSPI_1);
    add(b_toGraphic_2_Screen);
    add(b_toGraphic_4_Screen);
    add(dg_AI_1);
    add(b_toControlScreen);
    add(b_toLoginScreen);
    add(b_toDiscretScreen);
    add(b_toAnalyticScreen);
    add(b_toArchiveScreen);
    add(si_title_AI_1);
    add(sw_unit_AI_1);
    add(b_Settings);
    add(b_DI_1);
    add(b_DI_2);
    add(b_DI_3);
    add(b_DI_4);
    add(b_DO_1);
    add(b_DO_2);
    add(b_DO_3);
    add(b_DO_4);
    add(logo);
    add(lb_date);
    add(lb_time);
    add(l_SP_AI_1);
}

void Graphic_1_ViewBase::setupScreen()
{
    sw_unit_AI_1.initialize();
    for (int i = 0; i < sw_unit_AI_1ListItems.getNumberOfDrawables(); i++)
    {
        sw_unit_AI_1ListItems[i].initialize();
    }
}

void Graphic_1_ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &b_toGraphic_2_Screen)
    {
        //toGraphic_2_Screen
        //When b_toGraphic_2_Screen clicked change screen to Graphic_2_
        //Go to Graphic_2_ with no screen transition
        application().gotoGraphic_2_ScreenNoTransition();
    }
    else if (&src == &b_toGraphic_4_Screen)
    {
        //toGraphic_4_Screen
        //When b_toGraphic_4_Screen clicked change screen to Graphic_4_
        //Go to Graphic_4_ with no screen transition
        application().gotoGraphic_4_ScreenNoTransition();
    }
    else if (&src == &b_toControlScreen)
    {
        //toControl
        //When b_toControlScreen clicked change screen to Control_
        //Go to Control_ with no screen transition
        application().gotoControl_ScreenNoTransition();
    }
    else if (&src == &b_toLoginScreen)
    {
        //toLogin
        //When b_toLoginScreen clicked change screen to Login_
        //Go to Login_ with no screen transition
        application().gotoLogin_ScreenNoTransition();
    }
    else if (&src == &b_toDiscretScreen)
    {
        //toDiscret
        //When b_toDiscretScreen clicked change screen to Discret_
        //Go to Discret_ with no screen transition
        application().gotoDiscret_ScreenNoTransition();
    }
    else if (&src == &b_toAnalyticScreen)
    {
        //toAnalytic
        //When b_toAnalyticScreen clicked change screen to Analytics_
        //Go to Analytics_ with no screen transition
        application().gotoAnalytics_ScreenNoTransition();
    }
    else if (&src == &b_toArchiveScreen)
    {
        //toArchive
        //When b_toArchiveScreen clicked change screen to Archive_
        //Go to Archive_ with no screen transition
        application().gotoArchive_ScreenNoTransition();
    }
}

void Graphic_1_ViewBase::updateItemCallbackHandler(touchgfx::DrawableListItemsInterface* items, int16_t containerIndex, int16_t itemIndex)
{
    if (items == &sw_unit_AI_1ListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_units* cc = (cc_units*)d;
        sw_unit_AI_1UpdateItem(*cc, itemIndex);
    }
}
