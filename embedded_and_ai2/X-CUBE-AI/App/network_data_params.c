/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Thu May 18 17:46:30 2023
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[1601] = {
  0x3bcf87db3d9de106U, 0xbd98e88e3d48a6f4U, 0x3cadaa18bd84743eU, 0xbde2b93a3d8d1040U,
  0xbc552f9bbe1673bdU, 0x3cf4c5df3ddef0f0U, 0xbcef02963d607054U, 0xbe13e99a3e03b6c2U,
  0x3d73e915bcd7b1efU, 0xbdf30d853c6f58a7U, 0xbdb3ab9e3dbd0109U, 0x3b4ef63ebe0e12cfU,
  0x3c996073bdba23a7U, 0xbd06ef103d3a4e49U, 0xbbfe6ff03d6cdcacU, 0x3e0288f5bce2f3c8U,
  0xbd1e28e03da96bf6U, 0xbe5cdcaa3e480364U, 0xbd9a2b053bcabb48U, 0xbd754ffabe333f87U,
  0x3daa9c6e3d957585U, 0xbd4d11c6be10b21cU, 0x3bdd4fca3d0aa469U, 0xbd4f476dbd1ab15eU,
  0xbdc85448bc87baf5U, 0xbd676a5e3dddd784U, 0xbe1dfda5bce87442U, 0xbd45e31fbd070ee2U,
  0x3c84b328be678743U, 0x3d89ebe63e024bcdU, 0xbe037bd2bc8ba1a2U, 0x3d239c4fbdd775dcU,
  0x3d8bb7413de585b0U, 0xbd8b9df3bd9d1023U, 0xbd13faa13e188293U, 0x3e91403f3cc0be07U,
  0x3dae8289bc7cbc71U, 0xbda4aa12be88b114U, 0x3de0b0f03cbc660fU, 0x3de2e39b3dcf27ddU,
  0x3d8aa12bbd500f71U, 0xbdfcecfdbccdb4baU, 0x3d4a34bf3be72f0dU, 0xbdc9fcf33cb195a0U,
  0xbe1e38a33da7f5a9U, 0xbd6f2b99bdee5c97U, 0x3d74728c3be9992aU, 0x3dfe5ed93d30af7cU,
  0xbcec5976bd945d79U, 0xbda428ce3dc956c7U, 0x3ca3e063be6651acU, 0xbe09f477bde982a6U,
  0x3d89c6253dedab8cU, 0xbd084fa2be0e9d7eU, 0xbd33a6c2bdfba840U, 0x3de829223cdda27cU,
  0xbe4b4e023d017436U, 0x3d7e5033bc3f5970U, 0xbe0280f8be6b3175U, 0x3de7d1633d9d0d63U,
  0x3d539259bd3a7742U, 0x3d2479723e14bb90U, 0x3ddf069a3ce46a12U, 0xbd3c3993bc3482bfU,
  0xbcc7d3b6be1336d3U, 0x3e7721683d3dd6a6U, 0x3b5396d4bd16afddU, 0xbc8339273c227a03U,
  0x3d04f901be8352faU, 0xbd9f3d37bd86d87dU, 0x3d3ead84be6d7d9cU, 0x3d1f5e94bca163aaU,
  0xbddaf60abc0f8bc9U, 0xbdda146b3d60d978U, 0x3e61623a3df04936U, 0x3d1e11573d06c880U,
  0x3caccde63dc8ee35U, 0x3d4973a6be1009d8U, 0xbdfb2fd83c4a04e2U, 0xbd5ab0ed3d8a6bfeU,
  0x3d8d8dd4be8959d2U, 0xbe0b489e3db6f4a1U, 0x3d36f1f33e122bf9U, 0xbdafacd1be637affU,
  0x3ce331663d4e8cc5U, 0x3e0ab3333d09b14fU, 0xbe3c01433e371a2cU, 0xbc9400533b5ceba4U,
  0x3d71a307be1070caU, 0xbd276b933d9cc156U, 0x3cd5ce09bb9edfa2U, 0xbd7bddebbd3bd762U,
  0x3d84a8d9be3d4f4cU, 0xbd5cfb1a3d6d0b1cU, 0x3d4c9e0dbc803f9cU, 0x3e007543bc7b8ce7U,
  0x3e1976673e056cf5U, 0xbceafe8b3aba2947U, 0xbca781943e045171U, 0x3c0d731dbe0c486dU,
  0x3d91d7a73e45bf83U, 0x3cbff569bcf9f596U, 0x3db486f33d48cbaaU, 0xbd0cf0f4be8b7e2bU,
  0xbd64fb84bdcdaf99U, 0x3ba67f2ebdc757fcU, 0x3ae2d7f0be3479f0U, 0xbd030c273e30a45cU,
  0xbd9f6b2c3e04c5e9U, 0xbd0847c8bd98aec9U, 0x3d2a4b6bbd695211U, 0xbe07b572bd45dcbcU,
  0xbdd6ce063d3bac68U, 0x3e9c4bbd3e08ce38U, 0xbdc5b81fbdbe3f93U, 0xbde32fdc3d84384aU,
  0x3e99535d3e11372eU, 0x3e088d623e070384U, 0xbce2662cba2b27d0U, 0xbc69a0533dfbe2e0U,
  0x3d8b4da83dbe4757U, 0xbd6756843da3a511U, 0xbc597b15be055348U, 0xbd79cb543d952207U,
  0x3ce2ef6a3df7d4ddU, 0xbe128974be5ae0abU, 0xbd19e5abbdb3a1adU, 0xbd670cca3cfc7570U,
  0xbe171223bd446298U, 0xbc2758e3bde2ca2cU, 0x3ddd64cf3e21b97cU, 0x3dd58c22bd242703U,
  0xbd582fb4bb5a0092U, 0x3d8d7c3e3d270f81U, 0x3e879b843da76bb6U, 0xbdcc8b58bcb601eeU,
  0xbd51fd62bde3a01bU, 0x3e03f6653db4702dU, 0xbd8f28c43cb8bc57U, 0x3d45bf2b3e0f4431U,
  0xbdb4c2b5be67639cU, 0xbdc17f8abc8be3d1U, 0xbd67debdbd95ecf1U, 0x3e9227293d966526U,
  0xbd3664233ddc2db2U, 0xbdb6dc80be60d2a4U, 0x3da9a7103d357b96U, 0xbe12772e3d01c021U,
  0x3d5346793b8973c8U, 0xbda3d4383de42a86U, 0xbdaa53333d23fa09U, 0x3d6836983d782848U,
  0xbd883919bd75b3bbU, 0x3d01b4b9bba95c2bU, 0xbdd221f03e1aef50U, 0x3e0d2cdc3d8e25a6U,
  0xbb4638e4be0bf8eeU, 0xbd645abcbe510548U, 0x3e1fc9923e09a7f3U, 0xbb5787493dc369cbU,
  0x3b5ccf52bcfb244dU, 0xbe0ad71f3e4e98baU, 0xbc8c63f3bd1184cdU, 0xbd82a7a63af7e699U,
  0x3d4380a5be52680dU, 0x3d8d60f73d587afcU, 0xbd7529523d97a5ebU, 0xbd02df9cbdd3f663U,
  0x3d05de783d849049U, 0x3c8e48db3dc4800fU, 0x3ce5bc1dbe0e8a15U, 0x3de1bfea3d284c92U,
  0xbe23c40ebe5b496eU, 0x3d2fb587bd5faf41U, 0xbe065e89bdd7540bU, 0x3c1a9b5c3e16b88dU,
  0xbd66e028bdf96c93U, 0xbc0a3648be0094f2U, 0x3d6922d83c938f37U, 0xbd6313d5bdeacee7U,
  0x3df39ba0bca00c53U, 0xbcf916f83d134fe1U, 0xbe2230b03e7a1ba8U, 0xbde235923e157b24U,
  0xbc3f52963e14f93aU, 0xbe545529be32e120U, 0xbd252f78bde5f336U, 0xbd1c9eeabc3f764fU,
  0xbe295751bd0fd8c7U, 0x3e1e7f383dcaa576U, 0x3db6ed1bbc3c1775U, 0xbcab971a3d8d642aU,
  0xbdd8016e3d5ffd7bU, 0x3d01b8e8be66f9e7U, 0x3d8bb749bd45d520U, 0x3cda07f73d996bceU,
  0x3c03d1f8bdbaa8e5U, 0x3c76fb633caeb3f7U, 0xbd56b10f3e0130c2U, 0xbda697f1be3d6f04U,
  0xbcd541f6bb0ccdd2U, 0x3d968e46bc9c637aU, 0xbd78d235bd28dbbfU, 0x3c49df19be3c3f2eU,
  0xbd0c3c033c40e21eU, 0x3d8ca3383daa7f07U, 0xbe44bb40bdb59a4aU, 0xbda784f73d390ea5U,
  0x3d2d2f5a3e285a8dU, 0x3d5e5f863da66bf5U, 0xba8c7c38bce7e8d2U, 0x3d875d7b3d13c09eU,
  0x3e3b48a33d7a7671U, 0x3da413433e0dc39aU, 0x3e1ec998bce88cc8U, 0xbdbb6e07bc6812cfU,
  0xbd5aa263bde67b8dU, 0xbd8d6289bdb6bc98U, 0x3e2646b93db51458U, 0xbbab3e68bd640739U,
  0xbd5619073d6e28d7U, 0xbd933ad9bd95cd91U, 0xbe18f3bcbd5095b4U, 0xbd481add3e0b6b7bU,
  0x3e92c0773d8d15ccU, 0xbd3f7fd03ca1cc1eU, 0xbcaf3d2dbcb14d35U, 0x3e82e807bda5876cU,
  0xbe3043fabd87118eU, 0x3cf56dda3cf0e2afU, 0x3c22ed2abddf1cf0U, 0xbdbf8e653a29f530U,
  0x3db3465abe153917U, 0xbcc2b0e03dda36f9U, 0xbe061c01be0a4553U, 0x3df52ce33d8252ffU,
  0xbe3930f7bd6bb3a3U, 0xbd092598bcc38f46U, 0xbdad21dd3d6b6c9aU, 0x3e75decc3e1b7213U,
  0xbcd3a0f8bde60cf8U, 0xbd8596073de7997dU, 0x3e5374993dcbd26fU, 0x3c8380a0bdf32a1eU,
  0xbdb174c5be31352eU, 0x3bb44da5bdd3f468U, 0xbb59dcbdbd57cce0U, 0xbd1e6b143c71fc85U,
  0xbe53915fbdc4741eU, 0xbdbcbb05bd8d2e36U, 0xbdb3276fbe3699f7U, 0x3e2f0d253db79acdU,
  0x3dbe3aa43dcedf2aU, 0xbded02b43dc6a90eU, 0xbdae5e5cbd8b1913U, 0xbd03dfe8bd0791c9U,
  0x3e0bf75b3e16b683U, 0xbdd32cd0bcf9e1c8U, 0x3d47837cbd039196U, 0x3d21fb823de105b8U,
  0xbd862924be55d2caU, 0xbdc981cfbe0b5fddU, 0x3c9a78673e231dc9U, 0xbdf647afbe1c7965U,
  0x3e05f06e3e4e0013U, 0x3d83a742bd5fd0a6U, 0x3d1245b83da05fc4U, 0xbd947ff8bdde9c04U,
  0x3d17aa0abc72fb23U, 0x3cb3d912bdd35a8aU, 0x3d298df63dcd765bU, 0x3d7cbbd73d16e2d1U,
  0xbe012cf4bdacf8e8U, 0xbe05f7423d991b35U, 0xbdfb30923e22415dU, 0x3e836229bdac0f2bU,
  0xbd2f61473d45b6c4U, 0xbdd28c8cbb9d0d01U, 0xbe376a63bbaf7ff6U, 0x3dc3500f3c43b2ceU,
  0xbd3560aebe89aab8U, 0x3db54c01bcd42798U, 0x3d335db0be01b24cU, 0xbd598dc93d4dd7f4U,
  0xbde75366bc73e666U, 0xbc84dead3d14ea2fU, 0x3d9952743dccfc85U, 0x3dc4b3fbbc97dc11U,
  0xbd91b6c4bd566617U, 0xbd43f3e13d9b2891U, 0xbdd8af44bc4d0690U, 0x3dc53b0bbca18a45U,
  0xbe1942b13de107baU, 0x3dacd13bbda74f38U, 0xbd60cdeb3d7a4af9U, 0xbd902deb3e188d19U,
  0xbe162192be04543eU, 0xbd821b223d2abb47U, 0x3d389fab3d53afe9U, 0xbe1836fbbd8c23ccU,
  0xbd4c4bd53d704533U, 0x3d7ef47abe3ee9d4U, 0xbd0a086a3dbcacf0U, 0x3e21bbee3de710eaU,
  0xba763f18bb98791cU, 0xbdf48d19be1488bfU, 0xbddd7e98bcdbb290U, 0x3cbab9bb3e08bf0cU,
  0x3e36df483d2d2963U, 0x3dc6e0b8bcccc7b1U, 0xbe1e45293e09764aU, 0x3cfc98dabd6dbcbcU,
  0xbdfbdbf83dd09ebaU, 0x3d59a49f3d81b8f2U, 0xbd9a47d5be3b3886U, 0xbdb21eb63dc6078cU,
  0xbd896448bd37d864U, 0xbe2a1289bcd5c9b6U, 0x3d8450b4bdbb4a26U, 0xbd4d2106bcef0fdcU,
  0x3d80a9ec3cf6cb35U, 0xbe0e7c243d5eefa1U, 0xbcced0d9be18d447U, 0x3e96d1df3d3d57cfU,
  0xbbd13bb6bc061757U, 0xbe3fcbd53e510848U, 0x3e1d88c3bdcd5335U, 0xbdbd65703dd91e8cU,
  0x3cc0e7f5ba9fbbc6U, 0x3c098f22be74313eU, 0xbe1fd5243dbc6f7cU, 0xbde0dfd33ddad1e4U,
  0xbe0767d43da54a60U, 0xbd3ae641bcb0bda7U, 0x3d567779be49c26bU, 0x3dfc72a23d6654f2U,
  0xbd841dd23d4321efU, 0x3e2137303d23f578U, 0xbe5313293c1bedfcU, 0xbde4cd79bc2f1766U,
  0x3ba628193d3fca99U, 0xbe1d9605bdf58f20U, 0xbdc1a2673d7bf4baU, 0xbe08bc94be67ebc2U,
  0x3e4491003df9129eU, 0xbd11b0663d9220c1U, 0xbd9780503e2b2a81U, 0x3e228f97be0c1ed6U,
  0xbe1150e3bda1f6e9U, 0x3cb62b363e03704aU, 0xbdf026fcbcdd63eeU, 0x3df068523e25a69cU,
  0xbd974d05bb445ff2U, 0x3bad40d73e3c6230U, 0x3ceaae1dbdd7a397U, 0xbdb96d333e37121eU,
  0x3e2940d4bdc96f31U, 0xbd48ed9f3d119f6bU, 0xbda24543be6a8c61U, 0x3e84d9e8bcc2f452U,
  0x3d9ecedf3d8579b2U, 0xbe0439f5be8c1e9eU, 0x3bdd5c0c3d805d19U, 0xbdc916c1bddb36bdU,
  0x3da0c20b3d2a3d1fU, 0xbde86611be33a466U, 0xbd421f6dbdd095b3U, 0x3c3c2df43dad0255U,
  0xbe0e1ca4be1fc116U, 0xbdf330ecbd4b3e18U, 0xbdccbc373dc7e562U, 0x3e65bb4f3e045d05U,
  0xbd195f03bdc98cb8U, 0xbdf5d5d8be582987U, 0x3e8ebc623deff6a5U, 0xbca86650bd9a1da0U,
  0xbc5cc6b8bb7f2d28U, 0xbd059d413db81b35U, 0x3dacc3abbcde049aU, 0x3dbc8481bdc36090U,
  0xbcfba6a03e073a97U, 0xbd31f1f4bdf67efcU, 0x3dc7d5b23cb5a7c5U, 0xbe2b3496be475d1aU,
  0xbd91463b3da137ebU, 0xbe0ed911be5555f5U, 0x3e620cf43c1fb94bU, 0x3c92ec89bd9fb665U,
  0x3e0822e73c546867U, 0xbde4f0fc3ce0f419U, 0x3d8fbd95bb62c84bU, 0xbd661c0ebe4db23dU,
  0x3de52cf73ce72955U, 0x3da2d6b8bd323429U, 0xbe3565b5be2eec3dU, 0x3df2498ababaddbeU,
  0xbe2bae253bc1fd2dU, 0xbdbda4d93d1893f8U, 0x3e8dc4d83df29ff2U, 0x3d268faebd9fdc51U,
  0xbd708b3e3e2c5ecaU, 0x3d73b297bd0691edU, 0xbdd4b07fbdcc779dU, 0xbd55dcde3e3818c8U,
  0x3e3f52633d8fe3abU, 0x3e3c61373e25da5fU, 0x3d337535bc755cf1U, 0xbd73831f3d5639ffU,
  0xbd07abc1bb3d4c29U, 0xbdf78c44be4af29bU, 0x3e24f5b33deea779U, 0xbd1e95e13d80809fU,
  0xbdb7a0973d3f1c89U, 0x3e803fabbd9d4d0cU, 0x3d999de3bda72c64U, 0x3de069fa3c56ba28U,
  0xbe4038babdafb5b4U, 0xbda747c8bde9d900U, 0x3ce7c90d3d29e4aeU, 0xbe2aa34ebdd93a32U,
  0xbda2ab26ba6172beU, 0x3e214a723d644063U, 0xbe17e301bcdda458U, 0x3c0755dc3dae27f9U,
  0x3d3ee2b43d6ccb7aU, 0xbe25039c3cb15264U, 0x3d979942bd277207U, 0xbc369a633e0a83d3U,
  0xbe1385b0be401604U, 0x3d2f3468be36b499U, 0x3d1bdadebe58c186U, 0x3e2502a93dd874ceU,
  0xbdb5b43b3aada2d6U, 0xbd9026ceba27bdbcU, 0xbe0436483d227caeU, 0xbd94b4a73c42f795U,
  0xbc0b3c623e64a9b4U, 0xb856b8203d88fb0cU, 0xbdc38096bd97fce5U, 0x3dc3e3bebdccc118U,
  0x3d9d17e13d452f54U, 0xbd706ab8bdf1b501U, 0x3dd237943cc01b80U, 0xbe2ad34cbe518712U,
  0x3c24fd0dbbe4dd86U, 0xbdd47ebabe2efe35U, 0x3e3b21783b9e4506U, 0xbc690010bd8cb1ebU,
  0x3e0f86d63e2683e9U, 0x3d8e9ed5bc38a9cbU, 0x3e2c8235bd4456b3U, 0x3e26debebbb02fa0U,
  0xbdcddac6bbdbc99fU, 0xbce92e35bd110f85U, 0x3dd3b0023d822724U, 0xbde34af0bdd4915eU,
  0x3df48ad1bd8d61d4U, 0xbd9d8501be4e905aU, 0x3db8a3393d0738e6U, 0x3dc7dfddbde4ff41U,
  0x3cff088a3d817dacU, 0xbdbdc6e73e173265U, 0x3d8543c0bdaca5e2U, 0x39854e843dd37fa1U,
  0x39823711be3897b1U, 0xbceeb8c23cc9dc57U, 0xbdbecf5fbce91885U, 0xbde5f09d3c1455c0U,
  0xbdcf62913cf3abfaU, 0x3d1ce58f3e193d13U, 0x3e4efea23e0baf8eU, 0x3d82ffd33cabec4eU,
  0xbdcd4c7ebd746126U, 0x3c8680e43c47befeU, 0x3c07d9663d29c7c1U, 0xbceacad63df6cc2eU,
  0xbe36267abe477212U, 0xbcdac3c13d40173bU, 0xbddd3ebc3e25796eU, 0x3e70ed1cbde4b383U,
  0xbda40a40bd795329U, 0x3dfaa976bda16571U, 0xbc90a0a23dd4ebbfU, 0xbd5759dbbceb76b1U,
  0x3dfc3fd53cf60f04U, 0xbd937327bd8bd9d8U, 0xbdecaffdbd5c2c9aU, 0x3c4a1849bd57467dU,
  0x3e7451c13d1bbd34U, 0xbdc41386bcfb7220U, 0xbe0e97b3bdb9bb00U, 0x3dc48cbcbbf08f56U,
  0x3dd7e7f53d5442a2U, 0x3dfe5bc5be06b2b8U, 0xbd40ca0f3e6a8132U, 0xbe40af923d54a56cU,
  0xbd3ed1d5bd153406U, 0x3e766a163db22f30U, 0x3e1046c83d2a9092U, 0x3c20742c3d0580f3U,
  0xbdc57c833d608798U, 0xbd7f1c903d483c74U, 0xbd9440733da86269U, 0x3debe9543de48e49U,
  0x3d9337c9bde8de79U, 0xbd505577be188bd5U, 0x3e497a3dbc9600a1U, 0xbdd032cc3c4b4092U,
  0x3e06dfbe3e2c7bb2U, 0xbd886d063ca59936U, 0xbd3e2a2c3d8712bdU, 0xbd6b4776be868f8dU,
  0x3e39b8d2ba0988c4U, 0xbd7a1c2bbdbe1e54U, 0xbd74eb1f3e2c916bU, 0x3ea15bb63d3ab430U,
  0x3d64002ebda8bb70U, 0x3b1e99f23d5a86b6U, 0x3d14ad16be6276f2U, 0xbdfe2976bdc92c06U,
  0x3bc6c6dc3d4dcc70U, 0xbdc2f658bd18465aU, 0x3d99d883bdaba5d0U, 0x3d7892d0be154174U,
  0xb92e206c3d4172a7U, 0xbdbeec5dbdb04c34U, 0x3e007670bd8a9ab3U, 0xbd38c0633e17ae10U,
  0xbdf128a83d3588b9U, 0xbb040f5e3e156f28U, 0xbd202b1cbe58dbc7U, 0xbd61026f3cede1c7U,
  0xbd390260bd0e46f5U, 0x3e607c37bc5c0d8eU, 0xbd8b1d32bd9f320fU, 0xbbd0b0c03e013b26U,
  0x3e916619bc0583faU, 0x3d20de833da92b53U, 0xbe047ea0bcc2d064U, 0x3e5a73febe09cee8U,
  0x3b631f56bd5ec35fU, 0xbda1bb9cbe5d1faeU, 0x3e6e13a13d7dcbbcU, 0x3c51b2753bfc5a1bU,
  0x3c662ba5be6d225dU, 0x3ba84576bd99babfU, 0xbde22d35be15f2daU, 0x3d41c6823e263c5aU,
  0xbe376e16bdf605efU, 0xbb57d5dabcc51c2eU, 0x3d96ea8c3d8188ccU, 0xbe4c2c2ebdcebea4U,
  0xbdeb55673c90ad98U, 0xbd0a4d9c3cab83e9U, 0xbdbb91a0bd1dc960U, 0xbe1340f83d4504d5U,
  0x3dd8880c3e62840dU, 0xbd609005bd8ee38eU, 0x3df96149bd80ec7aU, 0x3daee0813d5bc72cU,
  0xbe2bbb5b3e5ffeccU, 0xbd8d4fd1bda43da1U, 0xbd937e12bda2ed36U, 0x3cc3948c3e19c104U,
  0xbcb60ea93c59ae1aU, 0xbca4ff6ebd9d6342U, 0x3e6682a03d304a7aU, 0xbce6bdf5bd87db7fU,
  0xbdd4f7483dfdfbc8U, 0xbe06faf23d970f0eU, 0x3c5adb4a3db0574dU, 0x3e48a4083cc74be4U,
  0xbe4c13f43e0d4c03U, 0xbd01bd113de256a0U, 0xbd86045cbe8931a6U, 0x3d6f9c81bd1ae70dU,
  0xbcebd207be000d11U, 0x3dab7d023cc89e2aU, 0xbe136922be2e6efbU, 0xbdf5b4c4bdef106dU,
  0xbd8365693e0b51b9U, 0xbe01f46abd16d2b0U, 0xbd93ed743c37b46dU, 0x3d17e3953e326a23U,
  0x3ddf4dccbb7d5cccU, 0x3d41e595bc34fc7eU, 0xbdae7a993da3bf8aU, 0x3e7e7801bd88d9cfU,
  0xbcf7cf04bdf53e8eU, 0x3da1fd173b3e7d85U, 0xbd53dbd7be14ba35U, 0x3df7d7babd1f9833U,
  0x3da739dd3dd661c6U, 0xbe3c8d2e3dbb1910U, 0xba835630bdfaa909U, 0x3daf9241bcecef1bU,
  0xbd22fd9bbe1a787aU, 0x3d9c22febda34709U, 0x3c8f1b90bd931033U, 0x3d9b54bdbe039ccaU,
  0xbde917303c8887deU, 0x3ca41a40be5ab884U, 0x3ccd515f3e2cba5aU, 0xbd361749be0f10e2U,
  0x3da373d93cad6b73U, 0xbd673c98be21c06aU, 0x3e33247d3d9d1ac7U, 0x3b8ae9c1be00e362U,
  0x3d413c2d3e086abeU, 0x3dc72b423e3993d8U, 0xbd0b81763cae79a6U, 0xbd8eca283e018a8aU,
  0xbdb804813dc38b23U, 0x3ccfa05f3dab8f27U, 0xbe39c1d63d5a70ebU, 0x3e033431bda73a9eU,
  0xbe2f4a323e1d3cd1U, 0x3d5f3a98bd3a905fU, 0xbdbb7b603d5d3984U, 0x3dc534bbbe3b30f7U,
  0x3c8cc2063d621763U, 0x3c186f173d5895a6U, 0xbd8c43ac3dbccb3fU, 0x3e356e93bdb61a55U,
  0x3d284f71bd878bc0U, 0x3d279b46be48e134U, 0xbd286a703e09ad79U, 0x3ab2c48b3d25dc50U,
  0xbca04a4e3d235a00U, 0xbdafa583bdd5d802U, 0xbd2f4ee0bcd1735eU, 0xbd317da13d985b86U,
  0xbe014ae4be000845U, 0xbc26ab28be03d6d0U, 0xbd8b129a3dcee9cfU, 0x3e969e183da07644U,
  0x3d257bc63d87a8fbU, 0x3e2bcc593cd049afU, 0xbe46dff53e041974U, 0xbd3d631e3d855ea9U,
  0x3d7888f53d8c46d9U, 0xbe1bbe73bd8614e6U, 0x3da5788c3d5b8898U, 0xbe49917abe232015U,
  0x3cde425ebb8ed716U, 0x3d6eae343d4beef9U, 0xbd730e01bcfcc050U, 0x3e827e01bda92191U,
  0x3c574e413e1f2a96U, 0x3e0ab668bd263c74U, 0xbcf2dbccbda08c7cU, 0x3d597ba63da704fdU,
  0x3d5a15793d57212aU, 0xbe00274bbda863e7U, 0xbe0ae534bdd74b35U, 0x3b0109c73e009e8dU,
  0xbd8ca1cabb394c08U, 0xbdcc3abb3e02a1a2U, 0xbe07d0bbbb8f7663U, 0xbe1ce3af3d7b99e5U,
  0x3dc70ac43cd87c84U, 0xbe38f48ebe5c4a57U, 0x3d61176cbd4adb22U, 0xbd5f04a33d6d50b7U,
  0xbd60bbe1bc5b312eU, 0x3d2d6dfabe26d326U, 0xbdcd079fbcdfd2ddU, 0xbdc861513e2b570bU,
  0xbd821f47ba31ee9dU, 0xbcb20b6e3d469cabU, 0x3c91b3723cd2e93fU, 0xbd81380dbe205f39U,
  0xbdf9017c3d7920bdU, 0xbe12f57dbe5a6bceU, 0x3e452f303e1258c3U, 0xbce63ba4bdc92963U,
  0x39a02b8abe61b3f9U, 0x3e3ff59dbcbb5eb8U, 0xbcd5e7eabd5a491aU, 0x3c9ead8dbe309829U,
  0x3e6661a4bd520de0U, 0xbd0399683db5f80fU, 0xbd9d611ebc66b39fU, 0x3e26d95e3dfd557dU,
  0x3dbcf2383df89e09U, 0xbd36ddb13ca5b26aU, 0x3c9108e43cfbfbd7U, 0xbd368750bd32bb07U,
  0xbd2c121ebdab0285U, 0xbbc562083d9b698aU, 0x3ba5f1c23e0486dfU, 0x3df5ae9d3bb1522aU,
  0xbd2d680ebce8775eU, 0xbd4b7e33bd913d0dU, 0xbd5d17113e10fdc2U, 0x3e774dea3d245795U,
  0x3d2a9f28bc04f1c4U, 0xbe0a5aad3d94b824U, 0x3d929dab3d2ee757U, 0x3cd61e0f3e099c57U,
  0x3e1113b3bd03cedbU, 0xbe300e833e6460aaU, 0x3df25dd0bdc42b20U, 0xbdfd6b9ebe49c13dU,
  0x3dfe47463dc30de3U, 0x3d0a79a0bd227840U, 0xbe199c17be2bbb35U, 0x3e80480b3d902891U,
  0x3d3a7dc3bd56687fU, 0xbe640fbbbe020816U, 0x3d5de38dbdb6dffdU, 0xbdef3c36bccafcecU,
  0xbd98695abc9ddeadU, 0x3e877e263de74d58U, 0xbdd66c933d8a2813U, 0x3da3d302bdde8815U,
  0xbd8704033e1efa8eU, 0x3d25529fbdda2b60U, 0xbe096e09be321799U, 0x3e23a2643e053b5aU,
  0x3cf7a163bd54e351U, 0xbe1b78bbbe2a0751U, 0x3e5966a03c7dd27fU, 0x3ce6bcc8bd5caab8U,
  0x3a4c1a54be4ab7d4U, 0x3b976336bcb9cf05U, 0xbda2977ebd7c1f17U, 0x3cf328b8bde8576cU,
  0x3cf36c04bceb5465U, 0xbd7a3efc3d40513cU, 0x3c837718bc246c32U, 0x3e4b374b3dcfc2adU,
  0x3e2871a03e210c1eU, 0xbc92b4b13cfba682U, 0xbdfad1ab3df244e3U, 0x3d5d361ebc84d5f8U,
  0xbcdc09df3e10d5ebU, 0xbe22fae1be4eaebdU, 0xbde0f2aabe0abae1U, 0xbbd84e76bddfef67U,
  0x3daf1eb83e3293faU, 0x3e47a14e3dff6361U, 0xbd4af6d43c0585f3U, 0x3a28b9b23e3005d3U,
  0x3dfce53a3d237563U, 0x3d3926cf3d4f3195U, 0xbe152820bd66cc85U, 0x3d53da3dbdfb94c3U,
  0xbdc9aa9c3e050c3fU, 0x3e6f0339bd93c8a7U, 0xbd3166b93c3eb4c2U, 0xbd7eee733dcf3750U,
  0x3dd03edcbd8b8b5bU, 0xbe04a8693a60c88aU, 0x3d817ca83dcc8e60U, 0xbe49f3a33d128398U,
  0xbcb2e9533de1a56fU, 0xbdb0bfb6be7257d6U, 0x3c40f95ebb3e7e38U, 0x3d9b05433d4ae4c4U,
  0xbdd5971d3d7a37f7U, 0xbcdcbef7bcfe9baeU, 0x3e1388ee3c263765U, 0x3d25f226bd4b6b78U,
  0x3d8a795e3dbec915U, 0xbd1b430fbc9ec12cU, 0xbd0a86213cf30b69U, 0xbd6236ecbc270738U,
  0xbd6779d5bdb005bfU, 0xbd27ed2d3e03b584U, 0x3e9eebd53cdbbf0fU, 0xbd5444423dd95cd5U,
  0x3dcb82e03cb612aaU, 0xbe214be8bdd3d110U, 0xbd08531fbd11e6deU, 0xbde57b56bd337cacU,
  0x3e7bcd153dc5d3feU, 0x3e21ef13bb6abf58U, 0x3de4bf13bc48d690U, 0xbe17f62c3e358d82U,
  0xbcad45dc3e2a4bd6U, 0x3e014452bd2f5ff4U, 0xbae29b72bd96bfacU, 0xbc56424bbe023b05U,
  0x3d0a2523be17a610U, 0x3dbdd9813e02b41fU, 0xbd494e273d085531U, 0x3d73a989be42ee28U,
  0xbcd3a3273dd20d2fU, 0x3c5e37fc3b5f0173U, 0xbdc7fef6bd19bd8eU, 0xbe38c57bbbd557f6U,
  0xbd8a367ebd92b7deU, 0x3b9545b53e3f663fU, 0x3e27b65b3decd479U, 0xbc8d43d3bca528abU,
  0x3c5301e7be5d084aU, 0x3ca010ab3e0493c0U, 0x3e1859fb3daa1695U, 0x3e0c5250bd8a2775U,
  0xbe4e8f5f3e6c042eU, 0xbb3f93ca3da98ff6U, 0x3c5cccb1bc46ca75U, 0xbe2cf8d3bc0c447bU,
  0xbc783474bd75bff6U, 0xbe0325293dd68bfdU, 0x3e7ef1083e07b944U, 0x3dfc96083df2560eU,
  0x3db0af913d5abad9U, 0xbe34981b3d4eb1c4U, 0xbd28ba4b3d91c78aU, 0xbcef37e83e163ccbU,
  0x3e153c273e00059aU, 0xbdbe3a38bd5e4537U, 0x3dc00eee3db4ee49U, 0xbe2e3b7dbd708c6cU,
  0xbdd514a2babd1b87U, 0x3e29ce863ba54803U, 0xbe38df4a3d92bc05U, 0xbd4258fbbd8bda8aU,
  0xbcd27901bdf6c542U, 0xbbd52e303d974f4fU, 0x3c3b53f0bcfc9088U, 0x3c662b813e099027U,
  0x3db0989abde3d83bU, 0xbdf36b1fbdbbcfeeU, 0x3da2d6e13bf3fe7eU, 0xbc168b9cbe269f74U,
  0x3d10626a3c805bb5U, 0xbdd0a7f6be683219U, 0x3d61a59b3d1f8b30U, 0x3d614c4fbd9d06cbU,
  0x3c1769693e048c3dU, 0x3e1eda093e0699b2U, 0xbdae0a493d257e9fU, 0xbdd424d7bd948e05U,
  0x3e7b26ca3db627a6U, 0x3d82551f3db44901U, 0x3e3987123bb54f35U, 0xbe4131223e53c031U,
  0x3d9794c2bd0166d5U, 0xbd97706b3df55812U, 0x3d474fd73e0e3d2fU, 0xbe04b817bb621f41U,
  0xbd37c849bdfe2a20U, 0x3e9b6fde3d8ab7e2U, 0xbd3f43dd3d841541U, 0x3dfef1e93dad9ff6U,
  0xbe2c29623e35a402U, 0xbc4b0305bdf7c789U, 0xbd17862d3dde0ca6U, 0xbdb97447bd642ddeU,
  0xbd0166c03ccc71b6U, 0xbd00c640bd829fb6U, 0x3e770672bd077342U, 0x3dad4995bde57992U,
  0x3dc25807be23b01fU, 0xbc6e9b2d3d36dd52U, 0xbdd4b8fbbe16b804U, 0x3cf2e8d13d2f05efU,
  0xbda04e99bd9d20d0U, 0xbcbc85ca3cc3346eU, 0xbdbcef90be6ea14cU, 0x3e5ca4733d659d5cU,
  0xbde553cbbd1384e1U, 0xbda4bb403df1df43U, 0x3e97b9653dc0d42aU, 0x3e1b5527bcdeccf9U,
  0xbd98cb393d9c1e3eU, 0x3cc25214bde55d12U, 0xbd9290c53dd4e1c7U, 0xbbd10d023da5cf7eU,
  0xbe1239b8be1d7a79U, 0xbb61909ebc2a10acU, 0xbdc19860be46a67cU, 0x3e652dbbbbc23240U,
  0xbdb1fb99bd5094ebU, 0x3d1241a83de45342U, 0xbe145116be1e574bU, 0xbd07607bbde0e2b7U,
  0x3d7a094ebe1e3560U, 0x3e6fde0b3d944d9dU, 0xbe192254bdd19a24U, 0xbdb27d993e0a0864U,
  0x3e5667a13de0d4a0U, 0xbd4bec9a3a516e17U, 0xbc9292af3bf9c94bU, 0x3d7a599dbe80156aU,
  0xbb8dfa783dd027e6U, 0x3dd9677e3cb9c9a3U, 0xbe2bef223e71742bU, 0xbcd051193d87af67U,
  0x3dd65a09bd632573U, 0xbd4a798c3dd47d93U, 0x3d966353bd16bf59U, 0xbe1d4454be53b107U,
  0x3e4382023c6f69d0U, 0xbd8ff9b3bdcac94eU, 0x3d8e22623d2b5919U, 0xbdffd7c0be1ee039U,
  0x3c0363883e1b810dU, 0x3df3fd76bc9bdb85U, 0xbd50ed06bd6d5565U, 0x3e4e62683e49ca1cU,
  0x3cbf00f1bd7100d2U, 0x3ca215273d6847fcU, 0x3cdfb8b6bd6a1995U, 0xbcdc0a303ba888c2U,
  0xbe14d54cbd31e6ecU, 0xbe13db85bdda2ef2U, 0x3dc861f53d80755fU, 0xbe29a052be6232beU,
  0xbd3bbea53aaca231U, 0x3e07aceabd2901bbU, 0xbd927d28be17cb54U, 0x3d35a49e3d89ab6dU,
  0x3d510de1bc378a76U, 0xbe2d10033e13ac27U, 0x3db672b23dcd2d27U, 0x3d7c451f3d03b55dU,
  0xbe20a826bd9e89fdU, 0x3cd7bb6e3c98c254U, 0x3da5f4393c7b0b28U, 0xbe0b0febbdaeed35U,
  0xbdccab5b3d49c7f3U, 0x3db85ca5be58bf5cU, 0x3d32bb2e3d92b078U, 0x3cb4895a3db9a4bfU,
  0x3d99de34bcdd8cfaU, 0xbe0b1b8a3e6249d1U, 0xbd52c6913df9ec9cU, 0xbe0420afbe84ef20U,
  0x3ddbe5783da317fbU, 0x3c37a846bdfed558U, 0xbcc82ae73ccb2ce0U, 0xbdf66944bd67bebeU,
  0xbd82df10bdcbe0beU, 0x3bc47f683e22999bU, 0xbd551ebabd408b0fU, 0xbc620f653e06a74dU,
  0xbd1a624c3ac7fac3U, 0xbe16668fbe0f1649U, 0xbdc484783dafd2d7U, 0xbd9753793d84658eU,
  0x3e667023bd8b1f8bU, 0xbdb5a1afbdee5904U, 0xbcfa92fc3d89dceeU, 0xbe33fa34bdb7f4d2U,
  0xbd42e1a6bdee47b4U, 0x3d6c54e43d1d37acU, 0xbd9bb35dbdfe65a3U, 0xbd67cd333de0a78eU,
  0x3e248ee4bb898f5bU, 0xbddd98213e02ae5bU, 0xbdf494c4bdee1f27U, 0x3df4f4223dc087a2U,
  0xbdb0e8ccbe026015U, 0xbd5a9fe1bd739aacU, 0x3cd6be7ebda447c2U, 0xbc8326e23df5865eU,
  0x3cac126abd1d9ecaU, 0x3cd260ae3d93a043U, 0x3df04e1c3dd08ab8U, 0x3db76ab63e1cbcd1U,
  0xbdaeaa5d3c957c94U, 0xbdc61853bd595fb4U, 0xbd8434debd96e111U, 0xbd734b5bbe4945ddU,
  0xbc9fc2e3bd4802d1U, 0xbd244b013d880557U, 0x3d7a53153d307cf4U, 0x3e0a5de73d33d56cU,
  0xbd848b103cbc9060U, 0x3dbff9a03db58128U, 0x3dc7831c3de3f031U, 0xbd48e49c3d86d9e0U,
  0x3d862a103e35d638U, 0xbc29ad2fbdb08448U, 0xbda003ccbd918babU, 0x3ca299473e20ee8aU,
  0x3e1caf6fbbad6ad1U, 0xbbc4e3743d2e1333U, 0xbd45fcb4bd18c05aU, 0x3cbdc843be0bb067U,
  0xbde0ddd7bbe3ebdeU, 0xbd249bccbddcfdb5U, 0x3e8ef73a3da5116bU, 0xbd6c7982bda226ebU,
  0x3e02d2f2bdd0c694U, 0x3ddfc162bca939acU, 0x3ce1c41b3db97f69U, 0xbd80d271bb98bac9U,
  0xbd2b64983d9dc822U, 0x3bb8f446bdf588d0U, 0x3c1f9f2dbe4fdbc5U, 0x3d8c2eba3e054bcbU,
  0xbdd58098bcd0957fU, 0xbdbd807b3de9d836U, 0xbe0058c9be142d02U, 0x3da3356c39542642U,
  0x3c8f0fb73e0de76bU, 0xbe4a4ac53d0a0ccfU, 0xbe1dc2873d44e3ecU, 0xbbd916e03d8334c2U,
  0xbd9ccaf7bd6719c6U, 0xbd27038cbddc3617U, 0x3c51a9013d1f9dcfU, 0xbcb994d63e0402afU,
  0xbdc82166bd1cfec7U, 0xbde2a2f63e3a8bc7U, 0x3c2f2b143dac0a7fU, 0x3d3c508ebdb8d652U,
  0x3afb00d03d558e86U, 0x3e3d37103d74de47U, 0xbca67123bdfa02b4U, 0x3b7dffb93dd55726U,
  0xbe0af3a4be036cccU, 0xbdeb5a6a3cf9fb16U, 0x3d8b34ce3e2ca4cdU, 0x3e35adfd3ddb1898U,
  0x3c18f878bc092885U, 0x3c76c76f3e00d1abU, 0xbda35f96be3c75ebU, 0xbd45b041bcd70515U,
  0x3dce63ccbd0b78deU, 0xbde500ee3dceb34cU, 0xbb483b3dbcc9d6edU, 0x3db7ec863e4cc38aU,
  0xbc682e3a3d0dcf09U, 0x3cd97d46bd4f803dU, 0x3de95dd63e38bcebU, 0x3e5fdb663d832a4aU,
  0x3d22968dbe145242U, 0x3d4dc269bc899fa7U, 0xbd60f5a7bde0c6ceU, 0x3ce46ece3d319595U,
  0xbd9c91debd7f1d5aU, 0x3e64d4a93deca647U, 0x3cdf771cbd983054U, 0x3d391e7e3e574ee5U,
  0x3d9c8c9c3c6c46e0U, 0x3d7473193d17bf74U, 0x3deedf4e3da5463bU, 0xbe3ba932bda853c1U,
  0xbd902c87bd223043U, 0x3d142ce5be4d0a07U, 0x3da949debd5b2a06U, 0xbe234d6cbdbee407U,
  0x3dd756ae3cd398daU, 0xbe090b07be66514aU, 0xbd9aed703d437a45U, 0xbe0f7ece3dc64961U,
  0x3d6db1f33d480b52U, 0x3c0f95573d05d796U, 0x3d4290f0bdc28dc7U, 0x3dd2ae90bd58698dU,
  0x3da0fd763c0941e3U, 0x3cf926be3db20428U, 0xbe24602a3cb1c5e9U, 0xbde40b2dbde8e1aeU,
  0x3de3cf9f3ce7aba7U, 0xbcfbade5be489dd0U, 0x3c5169f63d435f44U, 0x3d0e83403e06387dU,
  0x3e3764ea3db243f8U, 0xbc32766f3c3af502U, 0xbdcf128cbdc81739U, 0x3dd2c2573c91641eU,
  0xbcc2b571bd897b99U, 0x3e1273ca3d42a60cU, 0xbde9293abe1b2537U, 0x3da44440bdf04863U,
  0xbd57fdc8bc34d923U, 0x3d75a8983b92c6fbU, 0xbd7a9331bda71a77U, 0xbe1792f73e3f4486U,
  0xbe5966253dc568a7U, 0x3e34f035bd0f814bU, 0x3dadf5e8bda01743U, 0x3c3f1fdebd54739aU,
  0xbdee71713da9f3ebU, 0x3db11cca3d371fe8U, 0xbdf90f12bdb9283cU, 0xbca4eb3cbd21c05dU,
  0xbcd3b417be0196ebU, 0x3e6958cd3d3e5ebbU, 0xbdb7c287bd0bfc45U, 0x3dfb0cba3d99d673U,
  0xbd49c019be25cae4U, 0xbdd7ad3ebdadafddU, 0xbbba7b9cbddcd376U, 0x3de6b8183e257c82U,
  0xbdbac39cbe021058U, 0x3dca8a56be01cdd8U, 0x3b0c64323e2051c0U, 0xbd806ad6bdf92343U,
  0x3aa478e83df38a5bU, 0xbd98c33cbdcf72a1U, 0x3e08aab1bd32c611U, 0x3d4c70af3d389b60U,
  0xbde6f437bc579653U, 0x3e1c4d0a3e1ecd16U, 0x3c70449ebd2be926U, 0xbde53734be36b9f2U,
  0x3d8955033e1a34fdU, 0xbdac801c3c947673U, 0xbca396d0bdfcf6f4U, 0xbd1b4ff83d196d65U,
  0x3cc609bd3d99b484U, 0x3dcbb2983e090655U, 0xbdf642cfbd49f24fU, 0x3d17245f3d98a0b9U,
  0xbd92e8e5be270dd9U, 0x3e1d53123d141988U, 0x3def88b5bd9b7c31U, 0xbd941aa5bcdf9768U,
  0xbd1b85b53d9af0c6U, 0x3d4b04f93dec7c52U, 0x3e0be79e3df3fbd1U, 0x3cec6a20bd859fd6U,
  0xbc834ed3bd429758U, 0xbdd89724bdbdeb4eU, 0xbd512538bdfaab83U, 0x3cf1215fbe5515f4U,
  0x3db6aa303e256f51U, 0xbdbc3d933d9e9a53U, 0x3ccf45ad3e2d24b2U, 0xbc0c632c3d4b04b6U,
  0xbbafc8e2bdf0be96U, 0xbcc449bbbd811e34U, 0x3e66eb8c3d8d4c33U, 0xbdf4d21e3d71746eU,
  0xbc682f56bc99f97aU, 0xbdb228d1bdc0c49fU, 0xbd73a78abd95f4d7U, 0xbd98efc73d36dba4U,
  0x3e54bd793dc14015U, 0xbd428a7f3cba0eeeU, 0x3d2212bf3d372d9cU, 0x3e39bae83ddbc2a1U,
  0xbcaad56b3d8b35f2U, 0x3d6166b93b4e919cU, 0xbda61bd73e6739a1U, 0x3d3d898b3e084b16U,
  0x3de6046fbbf96133U, 0x3bd18441bdaf87f9U, 0xbe1f583a39facea0U, 0xbd64a00bbc10b159U,
  0x3e897ebe3dbcb047U, 0x3d8d19513d0062c5U, 0xbdc57fb4be85cd16U, 0x3d77188b3d31d45dU,
  0x3d8737bdbd8fb3b9U, 0x3d840a7a3db38840U, 0xbc314c10be7f5d95U, 0xbbd7824b3d5ce30bU,
  0x3d7d1cb03d8f6dedU, 0xbdf1e5efbcb09faaU, 0x3db22f39bdbd6a2fU, 0xbd5e7ca6bad1793eU,
  0x3cb9fbd5bdd0dc98U, 0x3cecbe29bd99b9c3U, 0xbd70848fbe0c45d0U, 0xbd4f1106bcbd9ab8U,
  0xbd9b9e113d3f629aU, 0x3bbf8070be661f90U, 0x3d160c333dfc95f7U, 0xbdefc97c3c718227U,
  0x3cf043c3be12ee7dU, 0xbd0c77523e1630ccU, 0x3c6c4abfbc2b94b0U, 0xbd6b8829bbab67afU,
  0x3e2424333c8c0faeU, 0xbcd48750bd4be9edU, 0xbd2992493d9c4c7aU, 0xbdf47575bd44e924U,
  0xbe15cbcbbde55431U, 0x3dd219363e08cc6dU, 0xbe08d1d73db215c8U, 0xbd4d33013daccbabU,
  0xbd0aee5dbe73503dU, 0x3e468cffbc3d936fU, 0x3cb55a31be0e96c6U, 0x3d3dda3dbe28e9b9U,
  0xbd3306bd3e174ed7U, 0x3e0068b8bd8798d1U, 0x3d81fdf7be009940U, 0x3d35c1573e04c057U,
  0xbe29804f3cbdf10cU, 0x3c4089cc3d844ec9U, 0xbdbdef96be1ccd7aU, 0x3d82f0fa3d81e08cU,
  0x3dac5360bd01fdd1U, 0xbdf456973e3297e5U, 0x3dee139cbcc6f372U, 0x3d38c305bc8b1e9fU,
  0xbdd82d203e558682U, 0xbd188130bdb735b8U, 0xbd903911be211c99U, 0x3defa2e13da08f8eU,
  0x3d46faf1bd9753b2U, 0xbbd4f96abd8577a9U, 0x3db1d8fcbd0f3895U, 0x3c896370bbde06c6U,
  0x3d973f283d9bb29aU, 0x3d9708453e00c446U, 0x3d87c2a5bd1e43feU, 0x3d17d61e3d63960aU,
  0x3dac77913b3e0fe2U, 0xbd2b45ea3c7d6722U, 0x3d3349513dbc710eU, 0xbd99adbc3af71957U,
  0xbde5e0a63d45c20fU, 0x3d87a0423c01afdbU, 0x3d42fbae3d828339U, 0x3df1c737bd86b37cU,
  0x3d64a14fbd7c8fdcU, 0x3d421fc2bdd8bed5U, 0x3d955caabdb812b1U, 0xbd70f58f3da079c4U,
  0x3dacebddbe207aaeU, 0x3de5ad063dc7fadfU, 0x3d45439b3dcdac6fU, 0x3d8fb32f3d920978U,
  0xbe1dd737bd317087U, 0x3d7995e4bdaf2f1bU, 0xbd01902c3da9dca4U, 0x3e0562efbd27c8fcU,
  0x3cba1740bdecbf0eU, 0x3d462e213df19f84U, 0x3dd5bfa03d30c8fbU, 0xbcb4b4cb3d9c8a09U,
  0x3d022bd1bd650744U, 0xbdb54053bddcfd45U, 0x3d1103153dd331d9U, 0x3c03c9243d8496d7U,
  0x3cf758953d546336U, 0x3c76b8e73dc9d646U, 0x3da7d8ca3d187376U, 0x3de857b13d2cb0b1U,
  0xbd238d1f3da0b2c7U, 0x3cf01b6d3e05799bU, 0xbd5cd55d3e22682fU, 0x3e0521303d76ed64U,
  0x3d1fc7a5bdf037e2U, 0xbc07c43d3dd75e94U, 0xbcbd378c3dac2986U, 0x3d6394fb3d8c6a10U,
  0xbdc072023d5e8164U, 0x3db6b07a3defb6d7U, 0x3de9d0d13d1dc9d1U, 0xbdce7bcb3df2df7eU,
  0x3dcd90d03d19c7e3U, 0x3d4c234abdaa1ff3U, 0xbc22b0bfbd9537c7U, 0x3dcb50023cce4a64U,
  0x3db6affebd447e47U, 0xbd09edf73cca8989U, 0xbd9241db3b4860daU, 0x3d497d03bc054e36U,
  0x3d8cb69abda49ac2U, 0x3d8140a63e043c7fU, 0x3d68813b3c8dfbd7U, 0x3d97e3afbdc49221U,
  0xbdaf4d823d97c566U, 0x3d826dc9bc19f49eU, 0xbdef284e3d813d7fU, 0xbd506e253d567a17U,
  0x3d176a2f3cc0921dU, 0x3d5ecc373dc1af4bU, 0x3de62a5cbccb04eaU, 0x3e0841df3da27f68U,
  0x3bda6b923d082666U, 0x3d99fc3a3de8600bU, 0x3d3560323d5dbd6aU, 0x3dc415d63d657dfeU,
  0x3cb1209dbce7c5a2U, 0x3da8192d3d5fdbc1U, 0xbdc8743e3dd2c05dU, 0xbc01e8373db0a0b8U,
  0xbcb6e4cebe3e42e6U, 0xbdb6a6dc3d583b5dU, 0x3d280d4fbc534f2aU, 0x3dd2142cbcad2870U,
  0xbd2a659e3cf7cc4fU, 0x3daa0173bcda0d92U, 0x3be8cba13d0bb860U, 0xbe66ed113d04c27eU,
  0x3d5f18b23d860969U, 0xbd1210963d8f0c14U, 0xbd598f323a96e03bU, 0x3df737313d8e3872U,
  0x3d1c4b603d7ee866U, 0x3d067b263d810cf0U, 0x3d1248a03e1529d5U, 0xbd28403c3d8bf740U,
  0x3dd5e1163d8b9cc2U, 0xba5909f33d9b6cb0U, 0x3ddc02d63d5142eaU, 0xbd9cef863d5c01f0U,
  0x3d7f723b3d990402U, 0xbd659dbbbe1f3da2U, 0xbdae50443c7133e4U, 0xbc24c6aa3d526f8cU,
  0x3d2706363d62aeb2U, 0x3d893a1f3cd5021cU, 0x3dc6f8733d7a5f2fU, 0x3d55b02f3c7a1aa5U,
  0x3ddbbc5a3bacfe08U, 0x3d48a6013beb0100U, 0xbd7192f13d3dd2feU, 0x3ce6016a3d2dd1c3U,
  0xbc61de243d0547efU, 0x3e15acaa3d6f56aaU, 0xbd528d86bd3bf807U, 0x3d89d5913b982397U,
  0x3d30cf42bcc3ed5aU, 0x3dee3881bb0ae06fU, 0x3d2b90913ba47facU, 0x3d253a2dbe524f86U,
  0xbd5ff5273d981063U, 0x3d83be21bd50dd26U, 0x3dce3b6cbd64038eU, 0xbd967ff73dd972a2U,
  0x3c067d633de5a6fbU, 0x3c1c79b5bc84fa91U, 0x3df7e571bdd77592U, 0x3d36e4f5be21b813U,
  0x3dd6bab23d9ab8abU, 0x3cff94e73db21c82U, 0x3e0a47923b880461U, 0x3dd0b3b53d4cce14U,
  0x3d7e7de13dbf53d8U, 0x3daab6b13cfaf4d6U, 0x3c9d1ca43de7162bU, 0x3d2d0a233daed664U,
  0xbd6cdaaabdd6c10aU, 0x3d6a8d76bd6c0f74U, 0x3ddb0e59bd66b272U, 0x3d5b009c3db34cdbU,
  0x3d5cc1a23daff3cbU, 0x3dc14a613da214a3U, 0x3d67023f3d5bbcf1U, 0xbbe5d6a73cbbd611U,
  0xbe13a6943d971b6bU, 0x3d565fbc3d7010f3U, 0x3df184753e09e74eU, 0x3c1b16be3ceca535U,
  0xbdb551233d6efe1dU, 0x3d81fc363d9b3eceU, 0xbd0efd1b3bef8f9fU, 0x3daed01d3de072f6U,
  0xbd2bc2ad3d8f0c8eU, 0x3dbf12193df21012U, 0xbcd70fbe3d485db4U, 0x3d9ef20abd3d417dU,
  0x3d6d076dbd86e291U, 0x3decc4ba3c34127eU, 0x3d8ad4ea3d58ed49U, 0x3d43be343d88d7b1U,
  0x3e083a923d91b19fU, 0x3cd12624be0b24e6U, 0xbb8a93b63ba2fb2dU, 0xbd780a4fbc04f7e7U,
  0x3d25ac1c3d85ba46U, 0x3dc226f8bd7b1d6bU, 0x3e0c9bfd3d706b72U, 0xbdddcab63d7e86b7U,
  0x3df19f2abd2ea76dU, 0x3db187ee3e11af70U, 0xbe37f7543d80bc02U, 0x3cf5a8083d362e5bU,
  0x3e29bff6be01d37cU, 0x3e1d1c983d8b1a51U, 0x3db08776bd843114U, 0xbd955619bd7028c3U,
  0x3d6fcd8e3de675beU, 0x3d2306593deb1ad0U, 0xbdbe797e3dce843cU, 0xbc4d49df3d60d139U,
  0x3d2efb523d97899cU, 0x3e22a8cb3dad5671U, 0x3dd1e9073dcd9912U, 0x3df927f83dd6a4b2U,
  0x3d8c6f5a3e1aca8fU, 0x3c00f0203ddf884dU, 0x3ddeed313d70b0bfU, 0x3c89fe483d8cf3e2U,
  0x3dd5cbbe3d39f151U, 0x3dc0915e3d57580dU, 0xbab4c6bcbbb4c6caU, 0xbd3aa0003d2dedb4U,
  0x3ddb819d3d645866U, 0xbdaf3eecbd27e646U, 0x3d4fd0ea3d743479U, 0x3dc7dfd33d8d83d6U,
  0x3c814797bd85b856U, 0xbdf2a1d93d8b167bU, 0x3cb9f5c33ded0969U, 0x3ca00d53bce57ab5U,
  0xbdebb59bbd471e98U, 0x3e1e8679be207b59U, 0x3e8cd1083d0cd2d3U, 0x3e16f265bdf1ed4eU,
  0xbe1201663e5bb510U, 0xbe61eef4be67d799U, 0x3e03e6e8bebbbfe8U, 0xbe15be4f3e49586aU,
  0x3e0f06183e0dcd9cU, 0xbe75c0b73e0c03b2U, 0xbea43303bd6af90cU, 0xbdb9f8f03dd56cd6U,
  0xbe0bc75dbe85577bU, 0x3e3c6ff43e806bd3U, 0xbd7e185c3e829f27U, 0xbe14d5713db88c37U,
  0xbe217da73dc7f3a2U, 0xbd8c889cbe7de4e7U, 0xbeca48d93e40bd8bU, 0x3e692befbec6cd5bU,
  0x3e59cf38be3b1832U, 0xbe42c9c93dc89058U, 0xbe748df5be5cd4f0U, 0xbe9c40f23e57d5cbU,
  0x3e30d8f7be909a44U, 0xbdf1ed8bbdf8b213U, 0x3e52865abe3bcd33U, 0x3df71ee13ddf03d6U,
  0xbe70c701be03b2cbU, 0x3df881173e1c5b83U, 0x3e417bd13e861d2aU, 0x3cec578e3e0c4decU,
  0xbd5e7af1be1391b3U, 0x3d954dcfbe45a857U, 0xbdaf6ffd3e5c8147U, 0x3e4213b0bd9eb26dU,
  0x3d911586be08ee31U, 0xbe2e9992beb36c66U, 0xbddcd20d3de0428cU, 0xbe6f16e03e270510U,
  0xbd81d40cbe8c421bU, 0xbe52f8df3e05e0f1U, 0xbe6c98aa3de01b28U, 0x3e28a3e23dfe1fbfU,
  0x3d717d703e3ccd2fU, 0xbe662a213e3a72b0U, 0xbea62b3a3dd87dd3U, 0xbd8af7773e2cc971U,
  0xbdf6a6593e0d4091U, 0x3e34cf803e1defafU, 0x3de014ddbdaafb22U, 0xbe466266be47ff94U,
  0x3d719cd23e2c9663U, 0xbeec6cc93d2223d4U, 0x3e504157be3463c4U, 0xbe81c7223e7bd4c9U,
  0x3decb27d3e4bc49dU, 0xbe4701c8bebe4aefU, 0x3e302a203de8f4f4U, 0xbec7e005be773310U,
  0x3e63efcabe86531dU, 0xbe6bcc4d3ddee71eU, 0xbcd252f2beb64e85U, 0x3e311b823e57645eU,
  0x3da259dcbe7d044cU, 0xbe436e12beb7bb83U, 0xbe91ab9fbe9d4bf4U, 0x3e412324be8e6663U,
  0xbdc678ddbe6b6411U, 0x3e38e6e63e141d3cU, 0x3e52f7353dcf775dU, 0xbe19709e3e782f67U,
  0xbe16e3973d0a551dU, 0x3e3a47dabe06daacU, 0xbe1a00e9be939f62U, 0x3e67feae3dd3b08eU,
  0x3e2a6d8ebe9ec7edU, 0x3deccd0c3dcca3d1U, 0x3e6f14eabe583ad8U, 0xbe0cf5493e1fa60eU,
  0x3d5548353e20fb36U, 0xbda1d063be88b47eU, 0xbec2cb143e296450U, 0xbe6a27773d4aa62bU,
  0xbe159fc4be8096d9U, 0xbe7b882abee2f12dU, 0x3e172e5a3e27f70eU, 0x3e28c8acbe20dd06U,
  0xbdd37f033e3e9ad4U, 0xbd99e7b2be83c571U, 0xbe0efb6ebea4c115U, 0x3e30d0083e4b0d76U,
  0xbe33bc2e3d1ed350U, 0xbcc8b5023e4a4149U, 0x3e3c5171be17ede7U, 0xbeae0dd93e898e50U,
  0x3e01618a3dff10c6U, 0xbe26a08cbde5b3ebU, 0x3e883b4f3e240d41U, 0x3db2a4593d9ba286U,
  0x3dcfd3b5be43d1b5U, 0x3e3518b23e9256b6U, 0xbe63026a3dff1fe8U, 0xbd5ca3a3be136406U,
  0x3df2b406bdab9cafU, 0xbe733ab33d3bf22dU, 0x3e53f8db3e58497aU, 0xbd96f313be5a03a9U,
  0x3e8522be3e3ca622U, 0x3d8cc2c53e16dabaU, 0x3db7771abe287874U, 0x3da5db463e3604a3U,
  0xbe5ac68cbebb16e6U, 0xbe489f85be8a3253U, 0xbd8b33a63d20d634U, 0xbe0abed63e1022caU,
  0x3e28ee72bdbca01cU, 0xbe5a94a9be57bbf3U, 0xbe983640be2a27c6U, 0xbe66fab03e7cc9f6U,
  0xbdd80423bec33303U, 0xbdd965debd2539beU, 0x3e0af68b3e340183U, 0x3e14c959be5c247dU,
  0xbe6cfec23e373a19U, 0x3e2e0b82be2059e8U, 0x3e06f8c1be576324U, 0x3ca54b7c3e8e3a2dU,
  0x3e531cc5be7e43f0U, 0x3dedff65be2ada2cU, 0xbe24185f3e30f723U, 0x3e063d28bdf4d1abU,
  0xbe303083be124adeU, 0x3ded4e473e73611cU, 0x3e034083be11766bU, 0x3e42272abe16bce6U,
  0xbd4b6a0e3e2cbe90U, 0x3d75ebb0bde84912U, 0xbe0259d4be9d2e57U, 0x3e39aa6fbe701c14U,
  0xbeb8d197bd9ef5b4U, 0x3e5bd53e3e085f7aU, 0xbe12140fbe41c7e0U, 0xbedbc5e93da38eaaU,
  0xbe6c68a0be70f435U, 0xbed4c6b23e838cafU, 0xbe6c198c3e619805U, 0x3ddf4db8be975c92U,
  0x3d9292b73e050bedU, 0x3e591657bec10f19U, 0x3e12ec2c3d8a2623U, 0x3e88bcb03dcd0bd0U,
  0x3e0a45dc3dd0c71cU, 0x3dcf57ca3e5a6e8fU, 0x3e3ec09ebe0f9d2cU, 0x3e02ef4fbea9084bU,
  0x3e11c924bdfde184U, 0x3dc73097bdb7b6e2U, 0x3dcb1d953e56194cU, 0xbd3e13023e412373U,
  0x3e01e5f3bd98b039U, 0xbd17ed7abde02287U, 0xbdf8edacbd79bfc9U, 0x3d90cedabe4ff83dU,
  0xbdc78c46be9888cdU, 0xbdfef1ab3e844eb0U, 0x3e4bcb143d885ca8U, 0x3e23a7e83e2f6383U,
  0xbe31ed0bbec24ba7U, 0xbe20154f3e374bfbU, 0x3e6a79e23e257027U, 0xbe417e01bd939c9eU,
  0xbe45ea51be3a1cccU, 0x3e277685be3b9459U, 0x3e1f12a5be08424aU, 0xbe5d9a0dbe1648d5U,
  0x3e02de853e879306U, 0xbe41a9c0be1d4093U, 0x3d8091753e408366U, 0x3ddf16323e83cb40U,
  0xbec845dc3e57734bU, 0xbe6a1b853e888d69U, 0x3e4849d0be2f6ca9U, 0x3e1b97bf3e714df5U,
  0xbd508ba33e1a83dbU, 0x3db17ddd3e7348e2U, 0x3dd15770bd993442U, 0xbdfc5a41be4e6f0bU,
  0x3e057a9fbea94e93U, 0xbda854e4be61af7fU, 0x3dc64eba3e1d1bafU, 0xbea18388be91d482U,
  0x3e38a3db3e6be187U, 0xbd925b9a3d33ceddU, 0xbe1b15a6be7008e5U, 0x3e195365bda23edaU,
  0xbedcdb093e09a246U, 0x3e7d8cd5be172aa4U, 0x3e0cc6823e631c68U, 0xbe258b373e796ba5U,
  0xb9d919c3U,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};
