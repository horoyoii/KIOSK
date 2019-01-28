import QtQuick 2.9
import QtQuick.Controls 2.2

Page {
    width: 600
    property alias btn_bg_8: btn_bg_8
    property alias btn_bg_7: btn_bg_7
    contentHeight: 500
    contentWidth: 400

    header: Label {
        text: qsTr("Page (2/2)")
        font.pixelSize: Qt.application.font.pixelSize * 2
        padding: 10
    }

    Button {
        id: btn_bg_7
        x: 33
        y: 46
        width: 173
        height: 166
        text: qsTr("Button")
        checkable: false
        Image {
            id: image3
            width: 318
            height: 204
            anchors.verticalCenterOffset: 0
            source: "image/Drink/Orange.jpg"
            anchors.horizontalCenterOffset: 1
            fillMode: Image.PreserveAspectFit
            sourceSize.height: button.background.height - 6
            anchors.centerIn: parent
        }
        display: AbstractButton.IconOnly
        font.family: "Times New Roman"
    }

    Button {
        id: btn_bg_8
        x: 274
        y: 63
        width: 187
        height: 172
        text: qsTr("Button")
        checkable: false
        Image {
            id: image4
            width: 260
            height: 178
            anchors.verticalCenterOffset: 0
            source: "image/Drink/Milk.jpg"
            anchors.horizontalCenterOffset: 1
            fillMode: Image.PreserveAspectFit
            sourceSize.height: button.background.height - 6
            anchors.centerIn: parent
        }
        display: AbstractButton.IconOnly
        font.family: "Times New Roman"
    }
}
