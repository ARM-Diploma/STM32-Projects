#include "eml_net.h"
static const float model_2_layer0_weights[2400] = { 0.077089f, 0.068879f, 0.054795f, 0.014609f, -0.090888f, -0.027704f, 0.006187f, -0.141304f, -0.016569f, -0.032973f, -0.017045f, -0.076691f, -0.015426f, 0.101150f, 0.007055f, -0.116388f, -0.072444f, -0.114019f, -0.122880f, -0.011679f, -0.045524f, -0.011018f, -0.036789f, -0.065843f, -0.008761f, 0.032906f, 0.012330f, 0.089334f, 0.050427f, 0.003371f, -0.004848f, 0.057872f, 0.130298f, -0.136995f, 0.049022f, -0.097336f, 0.129661f, -0.048306f, -0.092895f, 0.131849f, 0.092910f, 0.072819f, -0.087711f, -0.110737f, -0.003326f, -0.022218f, 0.022551f, -0.017076f, 0.107509f, 0.031677f, 0.040033f, -0.005168f, -0.136692f, 0.095417f, -0.035527f, 0.052852f, 0.064728f, 0.041089f, -0.105141f, -0.125568f, -0.019537f, 0.145978f, -0.112280f, 0.098948f, 0.054685f, 0.074913f, 0.126163f, -0.019090f, 0.011773f, 0.045180f, -0.028309f, 0.138441f, -0.112540f, -0.055671f, -0.050924f, 0.019751f, -0.065951f, 0.000648f, -0.135030f, -0.023872f, -0.112329f, -0.118733f, -0.052686f, -0.068936f, 0.101012f, -0.033098f, -0.032121f, -0.136108f, 0.201172f, -0.108696f, 0.100323f, 0.074759f, 0.048270f, 0.011944f, -0.126657f, 0.036356f, -0.052343f, -0.019719f, 0.061107f, 0.041683f, 0.058660f, 0.112825f, -0.026819f, -0.024998f, 0.101865f, 0.096694f, -0.091450f, 0.054428f, -0.008184f, 0.106015f, 0.092010f, -0.021575f, 0.047640f, -0.010687f, 0.061513f, 0.071352f, -0.079084f, 0.161768f, -0.105292f, 0.035552f, 0.065174f, -0.107038f, -0.101848f, -0.049620f, -0.098413f, -0.075252f, -0.027102f, -0.120359f, 0.078720f, -0.077985f, -0.003460f, -0.043507f, 0.005920f, -0.078057f, -0.099838f, 0.161966f, -0.002888f, 0.062745f, -0.081628f, -0.114183f, -0.000860f, 0.085037f, -0.040880f, -0.178423f, 0.001325f, 0.011900f, -0.074213f, -0.118021f, -0.006984f, -0.068699f, -0.047934f, -0.035415f, -0.069034f, -0.111815f, -0.084301f, 0.024641f, 0.029745f, 0.020987f, 0.041450f, 0.046897f, -0.060870f, -0.028743f, -0.053753f, -0.030694f, 0.051821f, 0.051916f, 0.041642f, 0.048886f, -0.113706f, 0.012406f, 0.065954f, -0.092831f, -0.082389f, -0.098228f, -0.083812f, -0.086083f, 0.044320f, 0.029038f, -0.077732f, 0.082602f, -0.054386f, 0.007701f, -0.146434f, -0.024061f, 0.017661f, 0.048100f, -0.062951f, -0.080196f, 0.013286f, -0.066337f, 0.086104f, 0.110517f, -0.125050f, -0.116731f, 0.011212f, -0.011047f, -0.119748f, -0.038964f, -0.122393f, -0.079725f, 0.016666f, -0.139713f, 0.076711f, 0.181228f, 0.095480f, -0.081655f, 0.054010f, 0.052877f, -0.066185f, 0.040493f, -0.025568f, -0.128749f, 0.066240f, 0.065122f, 0.053597f, 0.049788f, 0.155436f, 0.081552f, -0.105124f, 0.127570f, 0.026427f, 0.057938f, -0.027322f, 0.048489f, 0.060822f, -0.098223f, -0.053292f, 0.088852f, 0.121395f, -0.043635f, 0.129421f, -0.070917f, -0.008114f, 0.134385f, -0.095785f, -0.039665f, -0.052346f, -0.024779f, 0.067459f, -0.106528f, -0.051975f, -0.053874f, -0.061553f, 0.046952f, 0.157273f, -0.016215f, -0.135479f, 0.124701f, 0.039907f, -0.122842f, 0.011640f, 0.000857f, 0.110179f, 0.049535f, 0.010145f, -0.019379f, -0.085948f, 0.106134f, -0.035621f, -0.003582f, 0.166305f, -0.127178f, 0.033284f, 0.003403f, -0.071640f, -0.020161f, 0.083051f, 0.082794f, -0.059998f, 0.118328f, 0.071181f, -0.054265f, -0.001443f, -0.068288f, -0.030831f, -0.091705f, 0.015669f, -0.076673f, 0.040404f, 0.088030f, -0.031592f, -0.003450f, 0.064494f, -0.120986f, 0.024957f, -0.112048f, -0.147186f, 0.023829f, -0.036015f, -0.027197f, 0.103946f, -0.010380f, -0.050923f, -0.109807f, -0.102345f, 0.000799f, 0.101639f, 0.066253f, -0.036804f, -0.099017f, 0.151859f, 0.197060f, -0.057153f, -0.106535f, 0.001317f, 0.067221f, 0.100184f, 0.018647f, 0.049263f, 0.090646f, 0.122033f, -0.124430f, -0.099550f, 0.131498f, 0.085851f, -0.116381f, -0.116348f, 0.109695f, -0.116270f, -0.059474f, -0.038482f, 0.153064f, -0.073671f, 0.066416f, 0.023018f, 0.065845f, -0.071067f, 0.042499f, -0.006956f, -0.079176f, 0.090575f, -0.119890f, -0.025462f, 0.000202f, 0.048069f, -0.107525f, -0.038329f, -0.090253f, -0.122075f, 0.030515f, -0.008371f, -0.026248f, -0.024639f, -0.050659f, -0.144845f, 0.043356f, -0.074311f, 0.037048f, -0.039597f, -0.093208f, 0.047724f, 0.032676f, 0.008378f, -0.113712f, 0.047698f, 0.011411f, -0.067130f, -0.117326f, -0.081593f, -0.035035f, 0.082985f, -0.039490f, -0.034176f, -0.084808f, -0.127015f, -0.121649f, -0.043646f, 0.155079f, 0.150593f, 0.037458f, -0.049303f, 0.036157f, 0.075655f, -0.065246f, -0.122397f, 0.077443f, -0.117551f, 0.058949f, -0.073221f, 0.022712f, 0.067974f, 0.133099f, 0.000478f, 0.031344f, -0.070167f, 0.053927f, -0.092488f, -0.075061f, 0.046725f, 0.014741f, -0.010472f, -0.049784f, -0.111977f, 0.084373f, -0.139247f, -0.066209f, 0.023186f, 0.063417f, -0.024286f, -0.089458f, 0.006333f, -0.110705f, -0.029176f, -0.118678f, 0.018723f, 0.127476f, -0.075277f, -0.050066f, -0.097817f, -0.048312f, -0.128402f, -0.068172f, 0.085210f, 0.110786f, 0.049367f, -0.058391f, -0.028851f, -0.134722f, -0.043860f, 0.062088f, 0.051653f, -0.045953f, 0.003229f, -0.077753f, -0.106915f, 0.038591f, -0.122650f, -0.136019f, 0.027734f, -0.018067f, 0.026099f, -0.053950f, 0.149866f, 0.008633f, 0.088148f, 0.005081f, -0.077841f, -0.132528f, -0.096543f, 0.133352f, 0.068019f, -0.060985f, -0.037573f, -0.010214f, -0.052780f, -0.099875f, -0.069902f, -0.094482f, -0.044529f, -0.143033f, -0.083167f, 0.031666f, -0.003025f, -0.003289f, -0.017138f, 0.069033f, 0.032683f, 0.110229f, -0.131220f, -0.008436f, 0.118949f, -0.110454f, -0.040328f, 0.154782f, -0.105471f, 0.026615f, -0.052415f, 0.073514f, -0.034237f, -0.081797f, -0.001072f, 0.080115f, -0.053378f, -0.005226f, -0.149367f, -0.046753f, -0.172134f, -0.093533f, -0.130966f, -0.033483f, -0.025834f, 0.016053f, -0.003324f, -0.092154f, 0.092885f, -0.032196f, 0.048709f, -0.098392f, 0.130800f, -0.072510f, 0.041395f, -0.130826f, -0.042817f, 0.095368f, 0.043791f, -0.016219f, -0.071149f, 0.096304f, -0.054884f, -0.063528f, -0.049877f, 0.157943f, -0.108152f, 0.097108f, -0.122978f, -0.086973f, 0.064607f, -0.139145f, -0.006385f, -0.092479f, -0.156087f, -0.045630f, -0.064510f, -0.111720f, -0.094548f, -0.035569f, -0.141910f, 0.117386f, 0.028647f, -0.049055f, 0.077543f, -0.098188f, -0.047393f, -0.118746f, -0.037444f, -0.020557f, 0.084358f, -0.043444f, -0.070935f, 0.017935f, 0.070186f, 0.079511f, -0.167656f, 0.040664f, -0.103852f, 0.183965f, -0.033123f, -0.038717f, 0.075008f, -0.081680f, -0.079428f, 0.008260f, 0.074023f, 0.042775f, -0.088723f, -0.072610f, -0.095460f, -0.058696f, 0.010070f, -0.014221f, 0.168465f, -0.028464f, 0.119405f, 0.097595f, 0.065071f, -0.029141f, -0.101262f, 0.063965f, 0.008292f, -0.026705f, -0.080098f, -0.052576f, -0.115570f, -0.095740f, 0.105423f, -0.188170f, 0.140895f, -0.062283f, 0.071884f, -0.101659f, -0.046427f, -0.061062f, 0.055664f, -0.124103f, 0.075120f, -0.093224f, -0.117753f, -0.054934f, -0.067927f, 0.039275f, 0.003466f, 0.012799f, -0.110438f, -0.003293f, -0.114909f, -0.143803f, 0.121768f, -0.069000f, -0.022224f, -0.028167f, 0.013358f, -0.031674f, -0.028787f, -0.119974f, -0.072230f, 0.047338f, -0.030250f, 0.121017f, -0.001002f, 0.076239f, -0.113814f, -0.044456f, 0.174944f, 0.097250f, -0.089852f, 0.128129f, -0.091544f, 0.009304f, 0.041091f, 0.001364f, -0.042800f, -0.010173f, 0.040401f, -0.046237f, 0.080796f, 0.058272f, 0.013141f, 0.053096f, -0.135640f, -0.099721f, 0.097189f, -0.054448f, -0.100112f, -0.021734f, -0.121585f, -0.028105f, -0.026112f, -0.032129f, 0.092259f, -0.044563f, 0.005064f, -0.049681f, 0.041656f, 0.026137f, 0.118343f, 0.033807f, 0.045530f, -0.116814f, -0.104699f, 0.040362f, 0.030228f, 0.028166f, -0.079391f, -0.061095f, 0.164496f, 0.054007f, -0.109838f, 0.194951f, 0.123484f, 0.051722f, -0.043311f, -0.129549f, -0.021840f, 0.075694f, 0.144077f, -0.037906f, -0.056513f, -0.051823f, -0.033282f, 0.158139f, -0.021151f, -0.013077f, -0.049147f, 0.013563f, -0.067487f, -0.017244f, 0.148781f, -0.002923f, -0.015149f, 0.123333f, -0.041193f, -0.092884f, -0.104043f, -0.047448f, 0.011434f, -0.118857f, 0.035250f, 0.055004f, -0.084981f, 0.063639f, 0.074014f, -0.129608f, -0.046696f, -0.012391f, -0.031592f, 0.084613f, -0.103868f, -0.023013f, -0.111976f, 0.151692f, -0.071565f, -0.003442f, -0.086906f, -0.033051f, -0.149545f, -0.049786f, -0.004333f, -0.025429f, 0.073432f, -0.070300f, 0.008019f, 0.201547f, 0.027310f, -0.144392f, -0.045836f, 0.044346f, 0.089086f, 0.026334f, -0.099936f, 0.022038f, -0.051459f, 0.011210f, -0.063902f, -0.013798f, -0.095956f, -0.088687f, -0.047578f, -0.056592f, -0.119424f, -0.053375f, 0.021005f, 0.089559f, -0.064554f, -0.040111f, -0.064718f, -0.049046f, -0.078132f, -0.006009f, -0.109798f, -0.057733f, 0.027559f, 0.005644f, -0.104249f, 0.079692f, -0.154062f, -0.040775f, -0.097720f, 0.045975f, -0.020318f, -0.114919f, 0.009337f, -0.048264f, -0.003055f, 0.026549f, 0.039694f, 0.027885f, 0.027278f, 0.059680f, -0.070397f, -0.159475f, -0.075648f, 0.008764f, 0.078608f, -0.111349f, 0.012782f, -0.010892f, -0.023768f, 0.080208f, -0.061176f, 0.176698f, -0.116427f, -0.020132f, -0.089727f, -0.105311f, -0.091193f, -0.062704f, 0.133464f, 0.152638f, 0.067057f, -0.037918f, -0.120245f, 0.153637f, -0.037969f, 0.028859f, -0.051061f, -0.091914f, -0.005365f, -0.119541f, -0.059486f, -0.047495f, -0.020854f, 0.046274f, -0.155610f, 0.068896f, 0.066024f, -0.006577f, 0.087004f, 0.028899f, -0.075985f, -0.117084f, 0.014422f, -0.025943f, -0.146285f, -0.050097f, 0.022138f, 0.125399f, -0.165529f, 0.063936f, 0.116248f, -0.037233f, 0.048987f, -0.146926f, 0.128627f, 0.092287f, 0.045485f, 0.082725f, -0.175047f, 0.033848f, 0.108321f, -0.226102f, -0.105205f, 0.148936f, -0.266976f, -0.050796f, 0.021678f, 0.007129f, 0.098310f, 0.116050f, 0.027055f, -0.229681f, 0.145247f, -0.143764f, 0.009917f, -0.231924f, 0.054895f, 0.098111f, 0.067589f, 0.142746f, 0.033616f, -0.141055f, -0.045860f, -0.015655f, 0.001420f, 0.193113f, -0.272447f, -0.176246f, -0.074552f, 0.045819f, 0.064560f, -0.000653f, 0.079905f, 0.121011f, 0.030818f, 0.157934f, 0.040786f, -0.111145f, 0.139909f, -0.073206f, -0.219554f, 0.004195f, 0.060585f, 0.151304f, -0.204122f, -0.030657f, 0.001891f, 0.074047f, 0.095947f, -0.214147f, 0.147188f, 0.018013f, 0.035965f, 0.145482f, -0.011686f, -0.011480f, -0.225563f, -0.091142f, -0.184994f, -0.041225f, 0.083250f, 0.164408f, 0.036072f, -0.028387f, -0.089227f, 0.058144f, 0.136152f, -0.021643f, 0.029405f, -0.145726f, 0.063635f, 0.057477f, 0.113086f, -0.173054f, 0.014770f, -0.178322f, 0.097002f, 0.147181f, 0.109874f, 0.159293f, -0.054642f, -0.014830f, 0.036837f, 0.158452f, -0.004793f, -0.268881f, 0.050255f, 0.100091f, 0.075761f, 0.109878f, 0.148976f, 0.051681f, -0.186439f, -0.004653f, 0.133541f, 0.134240f, 0.063341f, -0.044884f, -0.029182f, -0.149247f, 0.204133f, -0.001219f, 0.106846f, -0.197031f, 0.040029f, 0.046824f, -0.226485f, 0.167154f, 0.128358f, -0.002996f, 0.178780f, -0.229051f, -0.273671f, 0.041562f, 0.084477f, 0.097605f, -0.211096f, -0.003894f, -0.095399f, 0.022175f, -0.208336f, 0.012964f, -0.200875f, -0.170823f, 0.037250f, 0.168330f, 0.179782f, -0.014976f, -0.198191f, 0.046658f, 0.013106f, 0.041478f, 0.055725f, 0.057811f, 0.135268f, -0.211676f, -0.000640f, 0.223304f, -0.099978f, 0.023451f, -0.170892f, 0.162613f, -0.005377f, 0.063551f, -0.201723f, 0.063228f, 0.103271f, -0.028454f, 0.149647f, -0.059663f, 0.120507f, 0.161596f, -0.078807f, 0.030036f, -0.052557f, -0.090689f, -0.131541f, -0.036427f, 0.032594f, 0.082219f, -0.148971f, 0.168441f, -0.262814f, 0.168523f, 0.053351f, 0.050244f, -0.145757f, -0.067678f, 0.145932f, -0.034736f, 0.126202f, -0.023781f, -0.215941f, -0.231576f, 0.162340f, 0.063249f, 0.020937f, 0.221207f, 0.053657f, -0.079554f, -0.076849f, 0.124015f, 0.024328f, -0.267957f, 0.024489f, 0.136054f, 0.174233f, 0.079955f, 0.002907f, 0.104679f, -0.028923f, -0.071808f, -0.213594f, 0.021169f, -0.125867f, 0.021298f, 0.083769f, 0.153552f, -0.182804f, 0.092185f, -0.196172f, 0.039881f, 0.074393f, 0.101032f, 0.025426f, 0.068495f, -0.159302f, -0.030853f, -0.040585f, 0.052522f, 0.125605f, -0.004378f, -0.215127f, -0.013378f, 0.167324f, 0.025746f, -0.213302f, -0.220413f, -0.172455f, -0.014081f, 0.020227f, -0.083501f, 0.005411f, 0.141593f, 0.072617f, -0.032180f, -0.197026f, -0.167706f, -0.126984f, -0.019271f, -0.108658f, -0.173918f, -0.166044f, -0.197967f, -0.113448f, -0.010036f, 0.030719f, 0.141441f, -0.109343f, 0.008150f, 0.050584f, 0.129930f, 0.101180f, 0.099881f, -0.236663f, 0.061089f, -0.049663f, 0.029669f, 0.128622f, 0.022226f, -0.043820f, -0.012258f, -0.042816f, -0.148094f, -0.190362f, -0.037534f, 0.186913f, -0.215852f, -0.067458f, -0.012133f, 0.104759f, 0.053401f, 0.146716f, 0.088345f, 0.005044f, -0.120493f, 0.134339f, 0.007446f, -0.226754f, 0.129441f, -0.072537f, 0.005533f, 0.119797f, -0.124104f, 0.084778f, 0.108423f, -0.063781f, -0.159852f, 0.042730f, -0.233037f, 0.118102f, 0.076230f, 0.080962f, -0.193994f, 0.111487f, -0.154500f, 0.134798f, 0.007623f, 0.022679f, -0.055456f, -0.206730f, 0.041833f, -0.019026f, -0.058839f, 0.005143f, 0.062724f, -0.041261f, -0.011202f, 0.032155f, 0.015322f, -0.211667f, -0.027045f, -0.259637f, 0.024802f, 0.158789f, 0.001526f, 0.064647f, 0.067316f, 0.038383f, -0.004198f, 0.094009f, -0.080215f, 0.072083f, 0.018248f, -0.196556f, 0.043088f, 0.088625f, 0.177575f, 0.157160f, -0.037293f, -0.107906f, -0.101941f, -0.004661f, -0.202987f, 0.114182f, 0.138578f, 0.064065f, 0.038969f, 0.182174f, 0.052138f, 0.104170f, 0.168597f, 0.125800f, -0.034051f, 0.199965f, 0.180408f, -0.016800f, -0.062284f, 0.210262f, 0.080700f, -0.200234f, 0.025830f, 0.096820f, -0.094997f, 0.086922f, 0.028280f, 0.131075f, -0.097701f, 0.047522f, -0.011038f, 0.186785f, -0.078169f, 0.044708f, -0.126552f, 0.075116f, -0.107825f, -0.126762f, 0.118916f, 0.045070f, -0.041970f, 0.018123f, 0.075051f, 0.074525f, -0.075920f, 0.115471f, -0.047508f, -0.208092f, 0.169085f, -0.063046f, -0.018796f, 0.044643f, 0.044721f, 0.003152f, -0.007610f, -0.008831f, -0.261330f, 0.087662f, 0.070034f, -0.001598f, -0.136985f, -0.224730f, -0.143488f, -0.005231f, 0.076318f, 0.133592f, -0.237611f, -0.164954f, -0.125585f, 0.064603f, -0.031736f, -0.016982f, -0.157336f, -0.074662f, -0.013012f, -0.144446f, -0.087730f, -0.032943f, -0.038613f, -0.059891f, 0.006754f, -0.056498f, 0.016199f, 0.039944f, -0.036128f, -0.080403f, 0.067690f, -0.098627f, 0.059680f, -0.080156f, 0.067272f, 0.113360f, -0.127445f, 0.040155f, -0.024393f, -0.016018f, 0.046552f, -0.106484f, 0.021094f, -0.053391f, 0.044664f, 0.135449f, 0.058993f, -0.061491f, 0.049955f, -0.028686f, 0.071212f, -0.034409f, 0.001731f, -0.033272f, -0.104885f, -0.110931f, -0.027637f, -0.056479f, 0.027702f, -0.056409f, 0.108102f, 0.069085f, -0.051267f, 0.048278f, -0.056609f, -0.089288f, 0.051581f, 0.056693f, -0.102604f, -0.055751f, 0.003369f, -0.063796f, -0.059854f, 0.017369f, -0.159928f, 0.009436f, 0.056918f, -0.030406f, -0.011677f, -0.038237f, 0.089319f, 0.031670f, 0.008046f, -0.081344f, -0.060747f, 0.068671f, 0.042281f, 0.066096f, 0.155066f, -0.069036f, -0.052270f, -0.048854f, -0.021391f, 0.029960f, 0.087537f, 0.119715f, -0.084537f, -0.065228f, -0.086649f, -0.038676f, -0.087478f, -0.115728f, 0.136686f, 0.039546f, 0.018856f, 0.064284f, 0.037027f, 0.061703f, -0.122651f, -0.102807f, -0.044282f, -0.053114f, 0.074864f, -0.047840f, -0.149668f, -0.070400f, 0.045074f, 0.062245f, -0.000939f, 0.022794f, -0.154561f, 0.053136f, -0.067086f, -0.050080f, -0.025246f, -0.187301f, 0.023548f, -0.109802f, 0.052360f, 0.157437f, 0.005071f, -0.133532f, -0.073975f, 0.022237f, -0.073877f, -0.090540f, -0.079234f, -0.129127f, 0.078495f, 0.011486f, -0.099968f, -0.120037f, -0.013475f, 0.092050f, 0.097576f, -0.139500f, 0.132946f, -0.056179f, -0.177146f, -0.092600f, -0.058727f, -0.052213f, 0.043813f, -0.120873f, -0.089662f, 0.109577f, 0.028294f, 0.157511f, 0.046603f, -0.011145f, 0.038051f, -0.070387f, -0.008498f, 0.095649f, 0.102645f, -0.103757f, 0.140163f, 0.162959f, 0.103363f, -0.076914f, 0.031132f, 0.000254f, -0.093169f, 0.038305f, -0.100244f, -0.028661f, -0.108030f, 0.122394f, 0.123169f, 0.012335f, -0.139251f, 0.124198f, -0.046587f, 0.009793f, -0.072389f, -0.050863f, 0.131713f, -0.057441f, -0.059795f, 0.002420f, 0.006066f, 0.060687f, 0.125452f, -0.002015f, -0.045168f, -0.006369f, -0.129389f, -0.078971f, 0.014048f, 0.047308f, 0.073690f, -0.033765f, 0.105728f, 0.085389f, -0.072018f, -0.020141f, -0.103987f, 0.195938f, -0.065438f, 0.083735f, -0.064158f, 0.037082f, -0.085195f, 0.079096f, 0.081653f, 0.085728f, 0.017469f, 0.020032f, 0.079811f, 0.004239f, -0.034059f, 0.025345f, -0.171181f, 0.096292f, -0.068488f, 0.040920f, -0.019567f, -0.043333f, -0.067907f, 0.167772f, 0.060677f, -0.196844f, -0.059340f, 0.135461f, 0.053243f, 0.001969f, -0.132632f, -0.180620f, -0.054867f, -0.097842f, 0.017786f, -0.143515f, 0.000306f, 0.019370f, -0.076845f, -0.044645f, -0.042009f, 0.119962f, -0.053977f, -0.135112f, 0.141677f, -0.123740f, -0.150009f, -0.222716f, -0.074420f, 0.079992f, -0.134209f, -0.151828f, 0.000779f, 0.029683f, 0.016048f, -0.017908f, -0.026860f, -0.006601f, -0.049552f, 0.045203f, -0.098470f, -0.062239f, 0.063226f, -0.086303f, -0.104292f, 0.040514f, -0.033819f, -0.040998f, 0.099371f, -0.112052f, 0.111693f, 0.126237f, 0.033727f, 0.059488f, -0.097654f, 0.004555f, 0.012879f, 0.137033f, 0.013477f, -0.128071f, 0.086272f, -0.029201f, 0.093778f, 0.165827f, -0.025692f, 0.014048f, 0.079511f, -0.101883f, 0.009241f, -0.103586f, 0.181179f, -0.073945f, -0.044869f, 0.124485f, -0.036993f, -0.031439f, 0.094894f, 0.029652f, -0.092254f, -0.080435f, -0.074606f, -0.006380f, -0.094529f, 0.035707f, 0.061044f, -0.087154f, -0.017892f, 0.106154f, 0.104664f, -0.153581f, 0.069402f, 0.119136f, 0.023316f, -0.026860f, 0.097843f, 0.132496f, 0.051039f, 0.061589f, 0.081032f, 0.090020f, 0.075131f, -0.129031f, -0.024435f, 0.005997f, -0.037691f, -0.073890f, -0.030588f, 0.057698f, 0.160701f, 0.119606f, 0.026214f, 0.025681f, -0.085286f, -0.059398f, 0.061114f, 0.093738f, 0.065510f, 0.019848f, -0.048337f, -0.040188f, 0.127758f, -0.062901f, 0.009743f, -0.092530f, 0.017464f, -0.006625f, 0.012797f, -0.110662f, 0.001915f, 0.003876f, 0.067972f, 0.015062f, 0.100776f, 0.089807f, 0.113949f, 0.050234f, -0.076450f, 0.045195f, 0.116637f, 0.036176f, 0.105146f, -0.140132f, 0.047502f, 0.030414f, 0.111236f, 0.034793f, -0.101110f, 0.143020f, -0.052732f, -0.148022f, 0.084942f, 0.086481f, -0.025843f, 0.122583f, -0.005691f, 0.098897f, 0.001255f, 0.049912f, 0.014665f, -0.084229f, 0.024175f, 0.036900f, 0.116960f, 0.049565f, -0.016029f, 0.029435f, 0.025302f, -0.023961f, -0.014171f, -0.074676f, 0.039569f, 0.055030f, 0.112313f, -0.055817f, -0.096435f, 0.064473f, 0.061795f, -0.054318f, -0.058720f, 0.005844f, 0.029329f, -0.057503f, -0.041399f, 0.102587f, -0.033919f, 0.046351f, 0.063473f, 0.011752f, 0.084143f, 0.045108f, -0.070421f, -0.064675f, 0.108858f, -0.026330f, -0.138744f, 0.057828f, 0.195325f, 0.072978f, -0.037767f, -0.028376f, 0.127242f, 0.112071f, 0.023528f, 0.022998f, -0.025111f, 0.082012f, 0.043136f, -0.224921f, -0.139273f, 0.031605f, 0.076686f, 0.027883f, 0.046347f, -0.256492f, -0.019701f, 0.117327f, -0.140663f, -0.268263f, -0.222149f, 0.178811f, 0.076541f, -0.184873f, -0.015353f, 0.129217f, -0.030513f, -0.100433f, 0.172502f, -0.056963f, 0.133599f, 0.141812f, 0.122991f, -0.130201f, -0.213748f, -0.047946f, -0.040076f, 0.081748f, 0.088105f, -0.225966f, 0.073435f, 0.044307f, 0.111409f, -0.059986f, 0.069408f, 0.134430f, 0.201754f, -0.205475f, -0.103497f, -0.139199f, -0.054610f, -0.121789f, -0.114652f, 0.244246f, -0.174687f, -0.035119f, 0.069039f, -0.048299f, 0.021326f, -0.002148f, -0.183835f, -0.088673f, 0.081261f, 0.061148f, -0.014165f, 0.088418f, -0.073146f, 0.068889f, -0.080825f, -0.108942f, 0.106550f, -0.057544f, 0.151802f, 0.099522f, -0.103494f, -0.095925f, 0.089651f, -0.067919f, -0.030503f, -0.208812f, -0.152807f, 0.078308f, -0.103200f, -0.084459f, -0.084013f, -0.005356f, -0.025898f, -0.014886f, -0.018538f, -0.012514f, -0.081694f, -0.129228f, -0.068428f, 0.092127f, -0.145053f, 0.042276f, -0.058041f, -0.182833f, -0.026097f, 0.030126f, 0.046226f, -0.100256f, -0.238469f, 0.080708f, 0.056233f, 0.009517f, -0.119902f, 0.121618f, -0.136836f, -0.027025f, 0.183968f, -0.098357f, -0.023798f, 0.062678f, -0.175432f, -0.156010f, 0.129261f, 0.117170f, 0.089896f, 0.132059f, -0.194691f, 0.009749f, 0.027460f, 0.028218f, -0.001426f, 0.118469f, -0.032854f, 0.070258f, 0.052301f, 0.116530f, -0.076807f, -0.085796f, -0.106068f, -0.027056f, 0.021646f, -0.187584f, 0.105692f, 0.039670f, 0.066885f, 0.048141f, -0.204617f, 0.004830f, -0.011271f, -0.006707f, -0.103793f, 0.033013f, 0.147653f, -0.180266f, 0.009054f, 0.136412f, 0.012192f, -0.194771f, -0.111671f, 0.103965f, -0.068287f, 0.038022f, -0.007341f, 0.229008f, 0.087004f, 0.054817f, 0.111600f, -0.018311f, 0.020215f, -0.000525f, 0.045582f, -0.221157f, -0.037176f, 0.047228f, 0.148125f, -0.211776f, -0.013431f, -0.008149f, -0.134578f, 0.061962f, -0.075063f, -0.120129f, -0.100950f, -0.038522f, -0.069770f, 0.218745f, 0.150150f, 0.043040f, 0.073759f, 0.137985f, -0.037818f, -0.170345f, -0.036822f, -0.003866f, -0.066822f, -0.145242f, 0.091356f, -0.150850f, -0.128528f, 0.168680f, -0.157961f, 0.133220f, 0.126505f, 0.053330f, -0.045548f, 0.055198f, -0.088917f, 0.134451f, -0.104416f, -0.125032f, 0.078351f, 0.129003f, -0.065470f, -0.004359f, -0.082584f, -0.078393f, -0.082222f, -0.002827f, 0.061426f, -0.049525f, -0.162915f, -0.000679f, -0.156613f, 0.142917f, -0.022872f, -0.051283f, 0.123698f, 0.030760f, 0.075885f, -0.028377f, 0.040123f, 0.042701f, 0.223025f, 0.095241f, 0.070390f, -0.089294f, 0.112940f, 0.155253f, 0.130109f, 0.015492f, -0.022682f, -0.028727f, 0.101446f, 0.118295f, -0.201838f, 0.174393f, 0.171897f, -0.056347f, -0.072160f, -0.068137f, 0.035770f, -0.002907f, -0.031080f, 0.093157f, -0.010195f, 0.026825f, -0.103426f, 0.096596f, 0.177298f, -0.073608f, 0.127640f, 0.102564f, -0.006511f, 0.115640f, 0.129470f, 0.230485f, -0.008561f, 0.132543f, 0.050462f, 0.125021f, -0.058728f, 0.071648f, 0.073882f, -0.111252f, -0.162718f, 0.038951f, 0.131446f, 0.088943f, 0.206788f, 0.138905f, 0.067734f, 0.177383f, -0.055708f, -0.033069f, 0.044645f, -0.076723f, 0.056058f, 0.094155f, -0.111994f, -0.153788f, -0.005926f, -0.154630f, 0.072414f, 0.109781f, -0.250163f, 0.235795f, 0.103755f, 0.014613f, -0.155152f, -0.057943f, 0.056709f, -0.043433f, -0.220897f, -0.148237f, 0.144211f, -0.077412f, -0.085413f, 0.071626f, 0.220985f, 0.079636f, -0.056578f, -0.047008f, -0.139733f, -0.067931f, -0.089822f, -0.124217f, 0.127618f, -0.127320f, 0.119885f, 0.101827f, -0.053070f, -0.048831f, 0.043905f, 0.111298f, -0.086190f, -0.005292f, -0.136415f, 0.080600f, -0.020657f, 0.077042f, 0.130172f, -0.144703f, 0.033704f, -0.056421f, 0.128916f, 0.084004f, 0.059782f, -0.128345f, 0.106981f, -0.184044f, 0.100928f, 0.034621f, 0.064046f, -0.109754f, 0.115552f, 0.014421f, -0.082191f, -0.053507f, -0.224919f, 0.048839f, -0.052835f, 0.021701f, -0.195915f, 0.087044f, 0.017748f, -0.151509f, 0.004479f, 0.096391f, -0.051868f, -0.090409f, 0.046477f, -0.161907f, 0.161608f, 0.156562f, -0.101293f, -0.013158f, -0.178444f, -0.123518f, 0.133813f, -0.163139f, -0.027294f, 0.119133f, -0.092734f, 0.161557f, 0.049565f, 0.068993f, -0.094125f, 0.094361f, 0.107305f, 0.225806f, -0.085709f, 0.092133f, 0.043415f, -0.249380f, -0.021561f, -0.101983f, -0.023145f, 0.123333f, 0.146671f, 0.017097f, -0.048074f, 0.086956f, -0.011571f, 0.147762f, 0.129640f, -0.153128f, 0.174408f, 0.208521f, 0.078399f, 0.021199f, 0.029880f, 0.059548f, 0.003158f, -0.007765f, -0.215686f, 0.083306f, -0.050605f, -0.154288f, 0.067344f, 0.068221f, 0.283693f, 0.109712f, -0.123499f, -0.154513f, 0.124204f, 0.020004f, -0.033279f, -0.198540f, 0.113192f, 0.108899f, 0.241338f, 0.032464f, 0.038909f, 0.220101f, 0.049183f, 0.069118f, -0.085779f, -0.183599f, -0.040874f, 0.064775f, 0.125447f, -0.020448f, 0.023432f, -0.055904f, -0.031994f, 0.041576f, 0.305265f, 0.299464f, -0.014259f, -0.013274f, -0.143102f, -0.147530f, 0.104271f, 0.264858f, 0.128870f, -0.088262f, 0.285455f, 0.082838f, -0.079995f, -0.066515f, 0.137866f, 0.156042f, -0.135586f, 0.047730f, -0.031952f, 0.028044f, 0.042898f, -0.056366f, -0.055439f, -0.158389f, -0.207356f, -0.165372f, -0.020946f, 0.068221f, 0.015075f, -0.026032f, 0.012321f, -0.192121f, 0.054290f, 0.182894f, -0.091518f, 0.162379f, -0.071890f, 0.286625f, 0.255676f, 0.009944f, -0.023766f, -0.180851f, 0.240108f, 0.206499f, 0.005502f, -0.206609f, 0.170949f, -0.085141f, -0.103113f, -0.065508f, -0.120254f, 0.035711f, 0.021954f, -0.126148f, 0.256608f, -0.179117f, 0.088524f, -0.112952f, 0.096046f, -0.105803f, 0.084383f, -0.146612f, -0.148647f, -0.033699f, -0.119410f, 0.178586f, 0.030835f, -0.075332f, -0.166086f, 0.062824f, 0.294570f, 0.153842f, 0.008396f, -0.132232f, 0.123266f, -0.206128f, -0.153893f, 0.191959f, 0.158751f, -0.117262f, 0.005287f, 0.165286f, 0.259475f, 0.006755f, -0.113476f, -0.138781f, 0.224347f, 0.278781f, -0.032621f, -0.030719f, -0.167193f, 0.220753f, -0.111788f, 0.111902f, 0.118304f, 0.276892f, 0.059496f, 0.186838f, -0.059451f, 0.161094f, 0.250486f, -0.187716f, -0.166639f, -0.148327f, -0.161147f, -0.144065f, 0.161143f, -0.129113f, -0.000051f, 0.076706f, -0.166822f, 0.182745f, 0.069639f, -0.100515f, -0.110983f, 0.090155f, -0.092665f, 0.000248f, -0.112275f, 0.202143f, 0.016419f, -0.177881f, 0.235280f, -0.017655f, -0.071997f, 0.238593f, 0.095972f, -0.047068f, 0.240639f, -0.096429f, 0.115191f, 0.196755f, -0.066614f, 0.181369f, 0.315153f, 0.036298f, -0.095196f, -0.000166f, -0.045105f, -0.039104f, 0.219224f, 0.283982f, 0.213333f, 0.232497f, 0.005135f, -0.179131f, -0.199387f, -0.091586f, -0.054825f, -0.167707f, 0.023875f, 0.225108f, -0.131817f, -0.199295f, 0.058499f, -0.143956f, -0.126909f, 0.109035f, 0.248505f, -0.051723f, -0.184132f, -0.039793f, 0.075845f, 0.025063f, -0.056454f, 0.047177f, -0.069722f, -0.181403f, 0.054499f, 0.017182f, 0.177180f, -0.041117f, -0.085765f, -0.126262f, 0.294175f, -0.194214f, -0.152094f, 0.027131f, 0.254868f, -0.029646f, -0.125150f, -0.068668f, -0.153212f, 0.054954f, 0.042341f, -0.063536f, -0.063095f, 0.192563f, 0.187460f, 0.224982f, 0.162939f, 0.017704f, -0.006024f, -0.042336f, 0.241508f, 0.071590f, -0.171930f, 0.124159f, 0.250550f, 0.054172f, 0.264634f, -0.065926f, 0.159799f, 0.212306f, 0.004620f, 0.029715f, 0.198453f, -0.122470f, -0.159160f, 0.085508f, 0.000644f, -0.145661f, 0.233411f, 0.101682f, -0.197218f, 0.011778f, -0.026947f, 0.067614f, -0.055228f, 0.310393f, -0.157516f, 0.245900f, -0.148400f, -0.001729f, 0.092700f, -0.025835f, -0.180441f, 0.163782f, 0.019539f, -0.201719f, -0.168918f, 0.248966f, -0.176361f, 0.145737f, -0.170149f, -0.180539f, -0.006506f, 0.086229f, -0.009189f, 0.055090f, 0.155129f, 0.245265f, -0.188664f, 0.048660f, 0.303588f, -0.168127f, -0.090554f, 0.241236f, -0.014563f, -0.078275f, 0.215471f, 0.296336f, 0.023721f, -0.142798f, 0.223807f, -0.144841f, 0.234245f, 0.209380f, 0.061121f, -0.167904f, -0.049432f, 0.190926f, -0.124923f, -0.051007f, 0.019785f, -0.145345f, -0.165651f, -0.071528f, -0.169006f, -0.156891f, -0.135803f, 0.043636f, -0.135847f, 0.107371f, -0.120318f, -0.052031f, -0.146876f, 0.225037f, -0.175759f, -0.076026f, -0.108200f, -0.086382f, -0.016010f, 0.117336f, -0.096726f, -0.019502f, 0.135124f, 0.097418f, -0.010356f, 0.153013f, 0.023167f, 0.279230f, 0.109256f, -0.041844f, 0.068448f, -0.125339f, -0.197551f, -0.076559f, -0.022654f, 0.010691f, 0.184780f, -0.135695f, 0.177422f, -0.079772f, -0.111818f, -0.014171f, 0.218610f, -0.054922f, 0.223467f, 0.076440f, -0.183263f, 0.082660f, -0.133831f, 0.058031f, 0.102872f, -0.160523f, -0.030723f, 0.179096f, 0.102910f, -0.113848f, 0.059975f, -0.212304f, 0.011665f, -0.121611f, 0.227878f, -0.049255f, 0.112656f, 0.002142f, -0.074591f, -0.112770f, -0.111922f, -0.019969f, 0.099462f, -0.071733f, -0.072316f, 0.136626f, -0.105757f, 0.089192f, -0.008569f, 0.225508f, -0.086992f, 0.207754f, 0.181377f, -0.081108f, 0.006394f, 0.268545f, 0.060326f, -0.010821f, -0.118114f, 0.022703f, -0.050553f, 0.036633f, -0.034293f, 0.160294f, -0.119365f, -0.133613f, 0.193897f, -0.043708f, 0.044374f, -0.092742f, -0.119306f, -0.105555f, 0.117010f };
static const float model_2_layer0_biases[400] = { -0.073890f, 0.048579f, -0.065170f, -0.006499f, -0.034966f, 0.086840f, -0.006776f, 0.016771f, 0.076024f, 0.073851f, 0.125749f, 0.073746f, -0.038639f, 0.066289f, 0.055563f, 0.037069f, 0.002900f, 0.084212f, 0.015466f, -0.041815f, 0.092013f, 0.043771f, 0.001885f, -0.075038f, 0.048281f, -0.112245f, 0.007915f, 0.066224f, 0.063727f, 0.047603f, -0.065772f, 0.118056f, -0.061661f, 0.055818f, -0.105833f, 0.047394f, -0.089879f, 0.072931f, 0.078357f, -0.058828f, -0.156718f, 0.084434f, 0.097646f, 0.112146f, 0.100427f, 0.048160f, 0.071307f, 0.070166f, -0.043320f, -0.154141f, -0.085539f, 0.060934f, 0.082940f, -0.031632f, -0.040963f, 0.130260f, -0.115599f, 0.022716f, 0.117980f, 0.048384f, 0.043160f, 0.104369f, 0.076435f, -0.022059f, -0.055915f, 0.031780f, -0.107905f, -0.088502f, 0.103122f, 0.035403f, 0.064741f, 0.008044f, 0.051852f, 0.030194f, 0.098553f, 0.015059f, 0.037219f, 0.081956f, 0.042161f, 0.113449f, 0.078466f, -0.039930f, 0.130347f, 0.029310f, 0.158601f, -0.053914f, 0.060285f, 0.130009f, -0.117294f, 0.039009f, 0.105161f, -0.008287f, 0.084064f, -0.023098f, 0.068562f, 0.055562f, 0.054323f, -0.093967f, 0.117048f, 0.089204f, 0.038523f, 0.114168f, 0.118590f, -0.100822f, 0.037544f, 0.100374f, -0.083069f, 0.049838f, -0.072860f, -0.009930f, 0.025182f, 0.099274f, -0.047972f, 0.089203f, 0.024724f, -0.033674f, 0.003058f, -0.071415f, -0.008136f, 0.049191f, -0.080373f, 0.068708f, 0.129137f, 0.063112f, 0.017332f, 0.056764f, -0.095982f, 0.074165f, 0.074107f, -0.085597f, -0.009397f, 0.063686f, 0.063106f, -0.116776f, 0.052363f, -0.050886f, 0.023507f, 0.036966f, 0.094573f, 0.054394f, -0.024783f, 0.112385f, 0.079345f, 0.133064f, 0.033240f, 0.006666f, 0.113464f, 0.075188f, 0.054136f, 0.044281f, 0.056028f, 0.095745f, -0.028292f, 0.021622f, 0.054653f, 0.082079f, 0.102906f, -0.097878f, 0.086244f, -0.007929f, -0.185802f, -0.022326f, 0.052791f, -0.089185f, -0.012897f, 0.041028f, -0.021137f, 0.102578f, 0.030249f, -0.041601f, -0.026618f, 0.083011f, 0.034111f, 0.007104f, 0.032412f, -0.225514f, 0.065448f, 0.054467f, 0.069847f, -0.035660f, 0.001151f, -0.053115f, 0.069444f, 0.120711f, 0.062233f, 0.038158f, 0.063013f, 0.032832f, 0.145667f, 0.035714f, 0.068343f, -0.041077f, 0.068170f, 0.104433f, 0.075891f, -0.000828f, 0.051089f, 0.107427f, 0.053713f, -0.076629f, 0.074715f, 0.062365f, -0.155509f, -0.056059f, 0.014722f, -0.085114f, 0.051376f, -0.010057f, 0.055342f, 0.040777f, 0.026002f, 0.067005f, 0.061126f, 0.097154f, 0.015265f, 0.052170f, 0.005279f, 0.107293f, 0.007172f, 0.048986f, 0.046344f, -0.058978f, 0.042436f, 0.028077f, 0.032539f, -0.013786f, 0.058432f, 0.146166f, -0.045891f, -0.051404f, 0.004643f, 0.067302f, -0.023917f, 0.043166f, -0.002119f, 0.116319f, 0.005020f, 0.041886f, -0.205381f, 0.040339f, 0.074250f, -0.054677f, -0.050992f, 0.064327f, -0.055667f, 0.100699f, 0.106176f, -0.073486f, 0.112135f, 0.008209f, -0.016233f, 0.009551f, -0.105205f, 0.121043f, -0.157929f, 0.044652f, 0.075548f, 0.104848f, 0.086968f, 0.031199f, 0.004151f, 0.135039f, 0.050001f, 0.101905f, 0.093422f, 0.062132f, 0.030634f, 0.083356f, 0.112835f, 0.019179f, 0.085370f, 0.042246f, -0.104860f, -0.057826f, -0.057632f, 0.057264f, -0.056323f, 0.106961f, 0.087549f, 0.053467f, 0.085914f, 0.053896f, 0.079141f, 0.094380f, 0.053647f, 0.056399f, 0.022929f, -0.007014f, 0.073783f, -0.144190f, 0.058610f, 0.052337f, 0.134671f, 0.117928f, 0.028887f, 0.009466f, 0.058348f, -0.088534f, 0.075803f, 0.063469f, 0.007311f, -0.034909f, 0.109594f, 0.085358f, 0.069848f, -0.041934f, 0.118195f, 0.093296f, 0.048917f, -0.026253f, -0.046205f, 0.077610f, -0.065862f, 0.057868f, 0.010991f, 0.115610f, 0.052961f, 0.067789f, 0.066818f, 0.047789f, 0.071140f, 0.133036f, -0.135883f, 0.025531f, 0.004974f, -0.004229f, -0.008116f, -0.060557f, 0.065297f, 0.040447f, -0.061307f, 0.094801f, 0.058696f, 0.137314f, 0.062140f, -0.108297f, -0.042640f, 0.117979f, 0.142271f, 0.086685f, 0.062859f, -0.179654f, 0.044478f, 0.029987f, -0.126783f, 0.165771f, 0.067921f, 0.153429f, -0.064547f, 0.086196f, -0.058633f, -0.072918f, 0.112529f, 0.058546f, 0.114797f, 0.039801f, 0.100838f, -0.093005f, 0.054887f, -0.012530f, 0.073993f, 0.042720f, 0.084638f, 0.158847f, 0.100390f, 0.102495f, 0.104806f, 0.121658f, 0.151163f, 0.068572f, 0.109147f, 0.007870f, 0.058762f, 0.108851f, 0.068825f, 0.016845f, 0.045396f, 0.104393f, 0.052574f, 0.094027f, -0.005517f, -0.001379f, 0.042463f, -0.045563f, 0.055748f, 0.107181f, -0.040991f, -0.085569f, 0.059620f, 0.050736f, 0.069099f, 0.097595f, -0.065293f, 0.015781f, 0.067914f, -0.118473f, 0.115741f, 0.022700f, -0.028013f, 0.019538f };
static const float model_2_layer1_weights[400] = { -0.048613f, -0.115092f, -0.156721f, 0.154810f, 0.034381f, 0.275032f, -0.118128f, 0.147409f, 0.214558f, -0.142583f, -0.226408f, -0.220638f, -0.366699f, 0.128811f, 0.196626f, -0.146234f, 0.138480f, 0.139672f, 0.136733f, -0.239993f, -0.057366f, -0.320702f, 0.104211f, -0.090807f, -0.260433f, -0.136503f, 0.250823f, 0.184021f, 0.255120f, -0.062035f, 0.090111f, -0.145345f, 0.097633f, -0.157706f, -0.247944f, -0.068620f, 0.188223f, -0.395087f, -0.388285f, 0.227707f, -0.182709f, 0.212705f, 0.097932f, -0.190223f, -0.215656f, -0.238823f, 0.210776f, -0.305183f, -0.282427f, 0.172703f, -0.121433f, -0.118129f, -0.183400f, 0.205591f, 0.108894f, 0.120664f, -0.128612f, -0.235134f, 0.152693f, 0.121340f, 0.261941f, 0.188949f, 0.137016f, 0.028850f, -0.144110f, -0.054316f, -0.193025f, 0.072902f, 0.215337f, -0.085663f, -0.077489f, 0.189528f, -0.133721f, 0.070842f, -0.350436f, -0.170508f, 0.109502f, -0.107823f, 0.163105f, -0.233486f, -0.273942f, -0.063393f, 0.130741f, -0.206027f, 0.109427f, -0.231051f, 0.124084f, 0.164688f, 0.184376f, 0.058958f, 0.182078f, -0.224770f, 0.105709f, -0.324549f, 0.168737f, -0.067855f, 0.137942f, -0.120434f, 0.154235f, 0.176573f, -0.083487f, 0.109415f, -0.195311f, -0.193735f, 0.168542f, 0.058987f, 0.039585f, -0.461767f, -0.176162f, 0.203374f, 0.245929f, -0.253472f, 0.198992f, 0.115575f, -0.371665f, -0.194343f, 0.113748f, 0.172036f, -0.241406f, -0.390381f, -0.262353f, 0.222594f, 0.108839f, -0.230272f, -0.356068f, -0.025674f, 0.210344f, 0.172956f, -0.247087f, 0.079273f, -0.358852f, -0.190850f, -0.307220f, -0.284512f, -0.278125f, 0.188611f, -0.229874f, -0.096910f, 0.144643f, 0.180568f, 0.101302f, 0.206021f, 0.242368f, -0.149844f, 0.033773f, -0.147353f, -0.131694f, 0.181915f, -0.288325f, -0.150394f, 0.103364f, 0.226557f, -0.310119f, 0.166434f, 0.099922f, 0.115625f, -0.211162f, 0.233478f, 0.155907f, -0.137654f, 0.157208f, 0.052071f, -0.267002f, -0.079011f, 0.165422f, -0.380456f, 0.049475f, -0.228666f, -0.251151f, -0.146117f, -0.443246f, -0.245637f, 0.164028f, 0.147638f, -0.157093f, 0.164828f, 0.186137f, -0.103270f, -0.257366f, -0.075149f, -0.321786f, -0.139631f, 0.198294f, 0.172669f, 0.038776f, -0.175523f, 0.197515f, -0.024500f, -0.148368f, 0.183904f, 0.268664f, -0.339949f, 0.124544f, 0.126349f, -0.112160f, -0.162722f, 0.160207f, 0.266077f, 0.075994f, 0.087228f, -0.191230f, 0.101478f, 0.285818f, 0.176852f, 0.124573f, -0.221689f, -0.143936f, -0.053867f, -0.083795f, 0.118507f, 0.045885f, -0.237529f, 0.211218f, 0.207004f, -0.212905f, -0.073706f, 0.184227f, 0.260031f, 0.147319f, 0.068731f, -0.164522f, 0.089583f, 0.177752f, 0.080985f, -0.365409f, -0.213648f, -0.269915f, -0.195921f, 0.039267f, -0.067970f, 0.140758f, -0.135494f, -0.092102f, 0.164972f, -0.210678f, -0.213458f, -0.166167f, -0.297289f, 0.246864f, -0.225566f, -0.381249f, -0.105477f, -0.040338f, -0.106151f, 0.175787f, 0.135706f, -0.214983f, 0.145299f, 0.178933f, -0.231441f, -0.156593f, 0.169966f, -0.210339f, 0.131808f, 0.277788f, 0.020178f, -0.248306f, 0.206164f, -0.166848f, 0.116210f, 0.172818f, -0.160249f, -0.119541f, 0.131093f, -0.142864f, -0.172060f, 0.237675f, 0.115872f, -0.142053f, 0.128176f, -0.147205f, 0.189603f, 0.168696f, -0.049662f, -0.113421f, 0.060039f, -0.306994f, -0.127296f, -0.234482f, 0.181314f, -0.077617f, -0.360974f, 0.133177f, 0.214681f, -0.189239f, -0.142655f, 0.079862f, -0.429244f, -0.235307f, -0.230868f, 0.256933f, -0.415578f, 0.220306f, -0.230566f, -0.295628f, 0.109035f, 0.129928f, 0.071569f, -0.377068f, 0.211999f, 0.067456f, 0.143479f, 0.100120f, 0.267065f, 0.101942f, 0.135032f, 0.213312f, 0.101242f, -0.140248f, 0.186282f, -0.330141f, 0.127866f, -0.123965f, 0.142369f, -0.089704f, 0.097261f, 0.209081f, 0.099178f, 0.188612f, -0.046405f, -0.074555f, 0.126854f, -0.109441f, -0.037092f, -0.060974f, -0.121547f, -0.203095f, 0.070707f, -0.297919f, -0.097436f, 0.258413f, -0.124484f, 0.066583f, 0.199017f, 0.171278f, 0.159820f, -0.379483f, -0.173756f, 0.179001f, -0.156331f, 0.161561f, 0.228981f, -0.072076f, -0.188957f, -0.181750f, -0.193277f, -0.183183f, 0.163538f, -0.133065f, 0.155345f, -0.146762f, -0.216408f, 0.264794f, 0.127802f, -0.153567f, -0.189124f, 0.188001f, 0.062777f, 0.257410f, 0.108929f, 0.210401f, -0.391158f, 0.266704f, -0.228621f, -0.171313f, 0.195594f, 0.235649f, 0.151946f, 0.150894f, -0.050914f, 0.237583f, 0.086666f, -0.074807f, 0.102218f, -0.201595f, -0.123219f, -0.330678f, 0.130351f, -0.220396f, -0.082193f, 0.153426f, 0.096830f, -0.284824f, -0.315457f, 0.230353f, 0.180313f, 0.043898f, -0.071464f, -0.234409f, -0.151450f, -0.079221f, 0.149732f, 0.134408f, -0.431359f, -0.147624f, 0.247608f, 0.221788f, 0.137476f, 0.243575f, -0.161664f };
static const float model_2_layer1_biases[1] = { -0.000414f };
static float model_2_buf1[400];
static float model_2_buf2[400];
static const EmlNetLayer model_2_layers[2] = { 
{ 400, 6, model_2_layer0_weights, model_2_layer0_biases, EmlNetActivationRelu }, 
{ 1, 400, model_2_layer1_weights, model_2_layer1_biases, EmlNetActivationLogistic } };
static EmlNet model_2 = { 2, model_2_layers, model_2_buf1, model_2_buf2, 400 };

    int32_t
    model_2_predict(const float *features, int32_t n_features)
    {
        return eml_net_predict(&model_2, features, n_features);

    }
    