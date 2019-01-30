import QtQuick 2.9
import QtQuick.Controls 2.2

Page {
    width: 300
    height: 50
    property alias btn_bg_1: btn_bg_1


    Button {
        id: btn_bg_1
        x: 0
        y: 0
        width: 299
        height: 49
        text: qsTr("주문하기")
        checkable: false
        font.family: "Times New Roman"
        display: AbstractButton.IconOnly
        Image {
            id: image3
            width: 170
            height: 150
            anchors.verticalCenterOffset: 0
            anchors.centerIn: parent
            sourceSize.height: button.background.height - 6
            source: "image/Big.jpg"
            fillMode: Image.PreserveAspectFit
            anchors.horizontalCenterOffset: 1
        }
    }


}
