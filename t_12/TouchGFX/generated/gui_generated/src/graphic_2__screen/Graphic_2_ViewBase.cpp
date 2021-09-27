/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/graphic_2__screen/Graphic_2_ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Graphic_2_ViewBase::Graphic_2_ViewBase()
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    background.setBitmap(touchgfx::Bitmap(BITMAP_COUNTER_BOX_ID));
    background.setPosition(0, 0, 480, 272);
    background.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    dynamicGraph2.setScale(1);
    dynamicGraph2.setPosition(6, 53, 396, 159);
    dynamicGraph2.setGraphAreaMargin(7, 24, 0, 24);
    dynamicGraph2.setGraphAreaPadding(0, 11, 0, 7);
    dynamicGraph2.setGraphRangeY(0, 100);

    dynamicGraph2MajorXAxisGrid.setScale(1);
    dynamicGraph2MajorXAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    dynamicGraph2MajorXAxisGrid.setInterval(25);
    dynamicGraph2MajorXAxisGrid.setLineWidth(1);
    dynamicGraph2.addGraphElement(dynamicGraph2MajorXAxisGrid);

    dynamicGraph2MajorYAxisGrid.setScale(1);
    dynamicGraph2MajorYAxisGrid.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    dynamicGraph2MajorYAxisGrid.setInterval(10);
    dynamicGraph2MajorYAxisGrid.setLineWidth(1);
    dynamicGraph2.addGraphElement(dynamicGraph2MajorYAxisGrid);

    dynamicGraph2MajorXAxisLabel.setScale(1);
    dynamicGraph2MajorXAxisLabel.setInterval(15);
    dynamicGraph2MajorXAxisLabel.setLabelTypedText(touchgfx::TypedText(T_TEXTID2));
    dynamicGraph2MajorXAxisLabel.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    dynamicGraph2.addBottomElement(dynamicGraph2MajorXAxisLabel);

    dynamicGraph2MajorYAxisLabel.setScale(1);
    dynamicGraph2MajorYAxisLabel.setInterval(10);
    dynamicGraph2MajorYAxisLabel.setLabelTypedText(touchgfx::TypedText(T_TEXTID2));
    dynamicGraph2MajorYAxisLabel.setLabelDecimals(1);
    dynamicGraph2MajorYAxisLabel.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    dynamicGraph2.addLeftElement(dynamicGraph2MajorYAxisLabel);

    dynamicGraph2Line2.setScale(1);
    dynamicGraph2Line2Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(50, 204, 71));
    dynamicGraph2Line2.setPainter(dynamicGraph2Line2Painter);
    dynamicGraph2Line2.setLineWidth(2);
    dynamicGraph2.addGraphElement(dynamicGraph2Line2);

    dynamicGraph2Line1.setScale(1);
    dynamicGraph2Line1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    dynamicGraph2Line1.setPainter(dynamicGraph2Line1Painter);
    dynamicGraph2Line1.setLineWidth(2);
    dynamicGraph2.addGraphElement(dynamicGraph2Line1);

    dynamicGraph2.addDataPoint(49.0374745245392f);
    dynamicGraph2.addDataPoint(56.01465965583f);
    dynamicGraph2.addDataPoint(62.8097485516677f);
    dynamicGraph2.addDataPoint(69.2183679775553f);
    dynamicGraph2.addDataPoint(75.0507574642664f);
    dynamicGraph2.addDataPoint(80.1389140048162f);
    dynamicGraph2.addDataPoint(84.3428771286216f);
    dynamicGraph2.addDataPoint(87.555906403363f);
    dynamicGraph2.addDataPoint(89.7083475679627f);
    dynamicGraph2.addDataPoint(90.7700356033687f);
    dynamicGraph2.addDataPoint(90.7511413805299f);
    dynamicGraph2.addDataPoint(89.7014303724297f);
    dynamicGraph2.addDataPoint(87.7079651612485f);
    dynamicGraph2.addDataPoint(84.8913452990256f);
    dynamicGraph2.addDataPoint(81.4006363212462f);
    dynamicGraph2.addDataPoint(77.4071917458769f);
    dynamicGraph2.addDataPoint(73.0976158208955f);
    dynamicGraph2.addDataPoint(68.6661489712154f);
    dynamicGraph2.addDataPoint(64.3067805418659f);
    dynamicGraph2.addDataPoint(60.2054042713878f);
    dynamicGraph2.addDataPoint(56.5323299050004f);
    dynamicGraph2.addDataPoint(53.4354499653413f);
    dynamicGraph2.addDataPoint(51.0343344299204f);
    dynamicGraph2.addDataPoint(49.4154887419215f);
    dynamicGraph2.addDataPoint(48.6289640915472f);
    dynamicGraph2.addDataPoint(48.6864546994161f);
    dynamicGraph2.addDataPoint(49.5609573731847f);
    dynamicGraph2.addDataPoint(51.1880061067128f);
    dynamicGraph2.addDataPoint(53.4684314939582f);
    dynamicGraph2.addDataPoint(56.2725337299362f);
    dynamicGraph2.addDataPoint(59.4455014206644f);
    dynamicGraph2.addDataPoint(62.8138586331153f);
    dynamicGraph2.addDataPoint(66.1926813201594f);
    dynamicGraph2.addDataPoint(69.3932935862475f);
    dynamicGraph2.addDataPoint(72.2311348406418f);
    dynamicGraph2.addDataPoint(74.5334819976665f);
    dynamicGraph2.addDataPoint(76.1467165769231f);
    dynamicGraph2.addDataPoint(76.9428444716112f);
    dynamicGraph2.addDataPoint(76.825006024559f);
    dynamicGraph2.addDataPoint(75.7317540540768f);
    dynamicGraph2.addDataPoint(73.6399266579818f);
    dynamicGraph2.addDataPoint(70.5659975655837f);
    dynamicGraph2.addDataPoint(66.5658474416876f);
    dynamicGraph2.addDataPoint(61.7329625432146f);
    dynamicGraph2.addDataPoint(56.1951298035133f);
    dynamicGraph2.addDataPoint(50.1097574295923f);
    dynamicGraph2.addDataPoint(43.6580048508957f);
    dynamicGraph2.addDataPoint(37.0379535193865f);
    dynamicGraph2.addDataPoint(30.4570882439813f);
    dynamicGraph2.addDataPoint(24.1243864249417f);
    dynamicGraph2.addDataPoint(18.2423282509152f);
    dynamicGraph2.addDataPoint(12.9991441611126f);
    dynamicGraph2.addDataPoint(8.5616066793907f);
    dynamicGraph2.addDataPoint(5.06865199778704f);
    dynamicGraph2.addDataPoint(2.62608394625249f);
    dynamicGraph2.addDataPoint(1.30256988716075f);
    dynamicGraph2.addDataPoint(1.12708680974271f);
    dynamicGraph2.addDataPoint(2.08791826718391f);
    dynamicGraph2.addDataPoint(4.13324116967123f);
    dynamicGraph2.addDataPoint(7.17327827852173f);
    dynamicGraph2.addDataPoint(11.0839300189141f);
    dynamicGraph2.addDataPoint(15.7117405205691f);
    dynamicGraph2.addDataPoint(20.8799997342966f);
    dynamicGraph2.addDataPoint(26.3957385150662f);
    dynamicGraph2.addDataPoint(32.0573380629567f);
    dynamicGraph2.addDataPoint(37.6624509154938f);
    dynamicGraph2.addDataPoint(43.0159184778572f);
    dynamicGraph2.addDataPoint(47.9373703400501f);
    dynamicGraph2.addDataPoint(52.2682036505565f);
    dynamicGraph2.addDataPoint(55.8776655947952f);
    dynamicGraph2.addDataPoint(58.6677980482466f);
    dynamicGraph2.addDataPoint(60.5770490102293f);
    dynamicGraph2.addDataPoint(61.5824086920131f);
    dynamicGraph2.addDataPoint(61.6999871430185f);
    dynamicGraph2.addDataPoint(60.984012567558f);
    dynamicGraph2.addDataPoint(59.524292562486f);
    dynamicGraph2.addDataPoint(57.4422418856378f);
    dynamicGraph2.addDataPoint(54.8856376451528f);
    dynamicGraph2.addDataPoint(52.0223135609412f);
    dynamicGraph2.addDataPoint(49.0330473682281f);
    dynamicGraph2.addDataPoint(46.1039276156235f);
    dynamicGraph2.addDataPoint(43.4185068397417f);
    dynamicGraph2.addDataPoint(41.1500567814138f);
    dynamicGraph2.addDataPoint(39.4542370392538f);
    dynamicGraph2.addDataPoint(38.4624722050879f);
    dynamicGraph2.addDataPoint(38.2763041742364f);
    dynamicGraph2.addDataPoint(38.9629473678343f);
    dynamicGraph2.addDataPoint(40.5522266518155f);
    dynamicGraph2.addDataPoint(43.0350224213828f);
    dynamicGraph2.addDataPoint(46.3632872286327f);
    dynamicGraph2.addDataPoint(50.4516354771435f);
    dynamicGraph2.addDataPoint(55.1804449088729f);
    dynamicGraph2.addDataPoint(60.4003481550625f);
    dynamicGraph2.addDataPoint(65.9379370928488f);
    dynamicGraph2.addDataPoint(71.6024541609717f);
    dynamicGraph2.addDataPoint(77.1932052954283f);
    dynamicGraph2.addDataPoint(82.5074002294063f);
    dynamicGraph2.addDataPoint(87.3481085377255f);
    dynamicGraph2.addDataPoint(91.5320151497305f);
    dynamicGraph2.addDataPoint(94.8966666877703f);
    dynamicGraph2.addDataPoint(97.3069201678395f);
    dynamicGraph2.addDataPoint(98.6603371639433f);
    dynamicGraph2.addDataPoint(98.8913083073844f);
    dynamicGraph2.addDataPoint(97.9737434717277f);
    dynamicGraph2.addDataPoint(95.9222198864558f);
    dynamicGraph2.addDataPoint(92.7915417364064f);
    dynamicGraph2.addDataPoint(88.674727891895f);
    dynamicGraph2.addDataPoint(83.6995069048052f);
    dynamicGraph2.addDataPoint(78.0234576693429f);
    dynamicGraph2.addDataPoint(71.827988030418f);
    dynamicGraph2.addDataPoint(65.3113896996928f);
    dynamicGraph2.addDataPoint(58.6812445008501f);
    dynamicGraph2.addDataPoint(52.1464827486915f);
    dynamicGraph2.addDataPoint(45.9094081679297f);
    dynamicGraph2.addDataPoint(40.1580050758825f);
    dynamicGraph2.addDataPoint(35.0588321116174f);
    dynamicGraph2.addDataPoint(30.7507833306165f);
    dynamicGraph2.addDataPoint(27.3399628470836f);
    dynamicGraph2.addDataPoint(24.895874688794f);
    dynamicGraph2.addDataPoint(23.4490771023638f);
    dynamicGraph2.addDataPoint(22.9903921002363f);
    dynamicGraph2.addDataPoint(23.4716990155151f);
    dynamicGraph2.addDataPoint(24.8082776881961f);
    dynamicGraph2.addDataPoint(26.8826051885147f);
    dynamicGraph2.addDataPoint(29.5494519796248f);
    dynamicGraph2.addDataPoint(32.6420717496707f);
    dynamicGraph2.addDataPoint(35.9792356046336f);
    dynamicGraph2.addDataPoint(39.3728276702691f);
    dynamicGraph2.addDataPoint(42.6356969767286f);
    dynamicGraph2.addDataPoint(45.5894502918421f);
    dynamicGraph2.addDataPoint(48.0718731237155f);
    dynamicGraph2.addDataPoint(49.9436811000484f);
    dynamicGraph2.addDataPoint(51.0943306743232f);
    dynamicGraph2.addDataPoint(51.4466559278639f);
    dynamicGraph2.addDataPoint(50.9601450974123f);
    dynamicGraph2.addDataPoint(49.6327249406091f);
    dynamicGraph2.addDataPoint(47.5009807174185f);
    dynamicGraph2.addDataPoint(44.6388021411254f);
    dynamicGraph2.addDataPoint(41.1545086020199f);
    dynamicGraph2.addDataPoint(37.1865678297088f);
    dynamicGraph2.addDataPoint(32.8980784464928f);
    dynamicGraph2.addDataPoint(28.470236319111f);
    dynamicGraph2.addDataPoint(24.0950454522951f);
    dynamicGraph2.addDataPoint(19.9675643565289f);
    dynamicGraph2.addDataPoint(16.2779977080383f);
    dynamicGraph2.addDataPoint(13.2039493882942f);
    dynamicGraph2.addDataPoint(10.9031467852343f);
    dynamicGraph2.addDataPoint(9.50692772301683f);
    dynamicGraph2.addDataPoint(9.11475103529133f);
    dynamicGraph2.addDataPoint(9.78995132210534f);
    dynamicGraph2.addDataPoint(11.5569088807797f);
    dynamicGraph2.addDataPoint(14.3997496083979f);
    dynamicGraph2.addDataPoint(18.2626287897035f);
    dynamicGraph2.addDataPoint(23.0515897152233f);
    dynamicGraph2.addDataPoint(28.637925359211f);
    dynamicGraph2.addDataPoint(34.8629115640197f);
    dynamicGraph2.addDataPoint(41.5437255904353f);
    dynamicGraph2.addDataPoint(48.4803166651464f);
    dynamicGraph2.addDataPoint(55.462957352572f);
    dynamicGraph2.addDataPoint(62.2801773369357f);
    dynamicGraph2.addDataPoint(68.7267661066592f);
    dynamicGraph2.addDataPoint(74.6115282416731f);
    dynamicGraph2.addDataPoint(79.7644847991571f);
    dynamicGraph2.addDataPoint(84.0432364475325f);
    dynamicGraph2.addDataPoint(87.3382372791724f);
    dynamicGraph2.addDataPoint(89.5767716510745f);
    dynamicGraph2.addDataPoint(90.7254779933805f);
    dynamicGraph2.addDataPoint(90.7913213800524f);
    dynamicGraph2.addDataPoint(89.8209783644669f);
    dynamicGraph2.addDataPoint(87.8986607732278f);
    dynamicGraph2.addDataPoint(85.1424672289092f);
    dynamicGraph2.addDataPoint(81.699409705744f);
    dynamicGraph2.addDataPoint(77.7393151319922f);
    dynamicGraph2.addDataPoint(73.447846612446f);
    dynamicGraph2.addDataPoint(69.0189238967452f);
    dynamicGraph2.addDataPoint(64.6468463692204f);
    dynamicGraph2.addDataPoint(60.5184335013116f);
    dynamicGraph2.addDataPoint(56.8054968925937f);
    dynamicGraph2.addDataPoint(53.6579444535708f);
    dynamicGraph2.addDataPoint(51.1977920030303f);
    dynamicGraph2.addDataPoint(49.5143210614497f);
    dynamicGraph2.addDataPoint(48.6605757428909f);
    dynamicGraph2.addDataPoint(48.6513380627465f);
    dynamicGraph2.addDataPoint(49.4626617815034f);
    dynamicGraph2.addDataPoint(51.032982601775f);
    dynamicGraph2.addDataPoint(53.2657594379632f);
    dynamicGraph2.addDataPoint(56.0335403008503f);
    dynamicGraph2.addDataPoint(59.1832892606996f);
    dynamicGraph2.addDataPoint(62.5427606186721f);
    dynamicGraph2.addDataPoint(65.9276643524342f);
    dynamicGraph2.addDataPoint(69.1493352871269f);
    dynamicGraph2.addDataPoint(72.0225982303914f);
    dynamicGraph2.addDataPoint(74.3735132216207f);
    dynamicGraph2.addDataPoint(76.0466898971862f);
    dynamicGraph2.addDataPoint(76.9118768558625f);
    dynamicGraph2.addDataPoint(76.8695608608631f);
    dynamicGraph2.addDataPoint(75.8553500368873f);
    dynamicGraph2.addDataPoint(73.8429636372501f);
    dynamicGraph2.addDataPoint(70.845706530943f);
    dynamicGraph2.addDataPoint(66.9163668459528f);
    dynamicGraph2.addDataPoint(62.1455381538584f);
    dynamicGraph2.addDataPoint(56.658430313483f);
    dynamicGraph2.addDataPoint(50.6102934716114f);
    dynamicGraph2.addDataPoint(44.1806349164675f);
    dynamicGraph2.addDataPoint(37.5664568081661f);
    dynamicGraph2.addDataPoint(30.9747818260429f);
    dynamicGraph2.addDataPoint(24.6147622696723f);
    dynamicGraph2.addDataPoint(18.6896849288007f);
    dynamicGraph2.addDataPoint(13.3891881962315f);
    dynamicGraph2.addDataPoint(8.88199972500125f);
    dynamicGraph2.addDataPoint(5.30948219748218f);
    dynamicGraph2.addDataPoint(2.78024277788553f);
    dynamicGraph2.addDataPoint(1.36601961521503f);
    dynamicGraph2.addDataPoint(1.09900797190214f);
    dynamicGraph2.addDataPoint(1.97073140707047f);
    dynamicGraph2.addDataPoint(3.93250201170299f);
    dynamicGraph2.addDataPoint(6.89745058694676f);
    dynamicGraph2.addDataPoint(10.744045225506f);
    dynamicGraph2.addDataPoint(15.3209577092504f);
    dynamicGraph2.addDataPoint(20.4530835420042f);
    dynamicGraph2.addDataPoint(25.9484757073758f);
    dynamicGraph2.addDataPoint(31.6059160633673f);
    dynamicGraph2.addDataPoint(37.2228229742267f);
    dynamicGraph2.addDataPoint(42.6031807353121f);
    dynamicGraph2.addDataPoint(47.5651755473194f);
    dynamicGraph2.addDataPoint(51.9482347850668f);
    dynamicGraph2.addDataPoint(55.6191902892899f);
    dynamicGraph2.addDataPoint(58.4773214315921f);
    dynamicGraph2.addDataPoint(60.4580786734764f);
    dynamicGraph2.addDataPoint(61.5353409838762f);
    dynamicGraph2.addDataPoint(61.7221191797407f);
    dynamicGraph2.addDataPoint(61.0696792754894f);
    dynamicGraph2.addDataPoint(59.6651231210284f);
    dynamicGraph2.addDataPoint(57.6275251467302f);
    dynamicGraph2.addDataPoint(55.1027817443767f);
    dynamicGraph2.addDataPoint(52.2573812256996f);
    dynamicGraph2.addDataPoint(49.271345319671f);
    dynamicGraph2.addDataPoint(46.3306263876101f);
    dynamicGraph2.addDataPoint(43.6192660746697f);
    dynamicGraph2.addDataPoint(41.3116308431967f);
    dynamicGraph2.addDataPoint(39.5650366213915f);
    dynamicGraph2.addDataPoint(38.5130592780695f);
    dynamicGraph2.addDataPoint(38.259800368717f);
    dynamicGraph2.addDataPoint(38.8753392915009f);
    dynamicGraph2.addDataPoint(40.3925557701353f);
    dynamicGraph2.addDataPoint(42.8054517457372f);
    dynamicGraph2.addDataPoint(46.0690419645378f);
    dynamicGraph2.addDataPoint(50.1008198320327f);
    dynamicGraph2.addDataPoint(54.7837421972335f);
    dynamicGraph2.addDataPoint(59.9706160227567f);

    loggerSPI_2.setPosition(426, 104, 54, 27);
    loggerSPI_2.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    loggerSPI_2.setLinespacing(0);
    Unicode::snprintf(loggerSPI_2Buffer, LOGGERSPI_2_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID78).getText());
    loggerSPI_2.setWildcard(loggerSPI_2Buffer);
    loggerSPI_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID77));

    digitalClock.setPosition(9, 12, 60, 27);
    digitalClock.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    digitalClock.setTypedText(touchgfx::TypedText(T_SINGLEUSEID81));
    digitalClock.displayLeadingZeroForHourIndicator(true);
    digitalClock.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR);
    digitalClock.setTime24Hour(10, 10, 0);

    b_Settings.setXY(410, 11);
    b_Settings.setBitmaps(touchgfx::Bitmap(BITMAP_B_BACKGROUND_WHITE_ID), touchgfx::Bitmap(BITMAP_B_BACKGROUND_GREEN_ID), touchgfx::Bitmap(BITMAP_SETTINGS_ICON_0_ID), touchgfx::Bitmap(BITMAP_SETTINGS_ICON_1_ID));
    b_Settings.setIconXY(9, 5);

    logo.setBitmap(touchgfx::Bitmap(BITMAP_DIR4069_BRAND6_ID));
    logo.setPosition(167, 19, 147, 20);
    logo.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    lb_date.setXY(69, 12);
    lb_date.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    lb_date.setLinespacing(0);
    lb_date.setWildcard(touchgfx::TypedText(T_SINGLEUSEID82).getText());
    lb_date.resizeToCurrentText();
    lb_date.setTypedText(touchgfx::TypedText(T_TEXTID3));

    b_toNextScreen.setXY(418, 212);
    b_toNextScreen.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_NEXT_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_NEXT_ARROW_32_ID));
    b_toNextScreen.setIconXY(22, 15);

    b_toPrevScreen.setXY(6, 213);
    b_toPrevScreen.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID));
    b_toPrevScreen.setIconXY(22, 15);

    b_toDiscretScreen.setXY(137, 225);
    b_toDiscretScreen.setBitmaps(touchgfx::Bitmap(BITMAP_B_CONTROL_0_ID), touchgfx::Bitmap(BITMAP_B_CONTROL_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_toDiscretScreen.setIconXY(0, 0);

    b_toLoginScreen.setXY(66, 225);
    b_toLoginScreen.setBitmaps(touchgfx::Bitmap(BITMAP_B_LOGIN_0_ID), touchgfx::Bitmap(BITMAP_B_LOGIN_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_toLoginScreen.setIconXY(0, 0);

    b_toGraphicScreen.setXY(213, 225);
    b_toGraphicScreen.setBitmaps(touchgfx::Bitmap(BITMAP_B_GRAPHICS_0_ID), touchgfx::Bitmap(BITMAP_B_GRAPHICS_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_toGraphicScreen.setIconXY(0, 0);

    b_toAnalyticScreen.setXY(288, 225);
    b_toAnalyticScreen.setBitmaps(touchgfx::Bitmap(BITMAP_B_ANALYTICS_0_ID), touchgfx::Bitmap(BITMAP_B_ANALYTICS_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_toAnalyticScreen.setIconXY(0, 0);

    b_toArchiveScreen.setXY(358, 225);
    b_toArchiveScreen.setBitmaps(touchgfx::Bitmap(BITMAP_B_ARHIVE_0_ID), touchgfx::Bitmap(BITMAP_B_ARHIVE_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_toArchiveScreen.setIconXY(0, 0);

    add(__background);
    add(background);
    add(dynamicGraph2);
    add(loggerSPI_2);
    add(digitalClock);
    add(b_Settings);
    add(logo);
    add(lb_date);
    add(b_toNextScreen);
    add(b_toPrevScreen);
    add(b_toDiscretScreen);
    add(b_toLoginScreen);
    add(b_toGraphicScreen);
    add(b_toAnalyticScreen);
    add(b_toArchiveScreen);
}

void Graphic_2_ViewBase::setupScreen()
{

}
