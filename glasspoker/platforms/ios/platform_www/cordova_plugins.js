cordova.define('cordova/plugin_list', function(require, exports, module) {
module.exports = [
    {
        "file": "plugins/cordova-plugin-game-center/www/gamecenter.js",
        "id": "cordova-plugin-game-center.GameCenter",
        "pluginId": "cordova-plugin-game-center",
        "clobbers": [
            "gamecenter"
        ]
    },
    {
        "file": "plugins/cc.fovea.cordova.purchase/www/store-ios.js",
        "id": "cc.fovea.cordova.purchase.InAppPurchase",
        "pluginId": "cc.fovea.cordova.purchase",
        "clobbers": [
            "store"
        ]
    }
];
module.exports.metadata = 
// TOP OF METADATA
{
    "cordova-plugin-whitelist": "1.2.0",
    "cordova-plugin-game-center": "0.4.2",
    "cc.fovea.cordova.purchase": "4.0.0"
}
// BOTTOM OF METADATA
});