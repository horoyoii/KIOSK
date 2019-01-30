import QtQuick 2.9
import QtQuick.Controls 2.2

Page {
    width: 600
    height: 400
    property alias btn_bg_3: btn_bg_3
    property alias btn_bg_2: btn_bg_2
    property alias btn_bg_1: btn_bg_1

    header: Label {
        text: qsTr("Page (1/1)")
        font.pixelSize: Qt.application.font.pixelSize * 2
        padding: 10
    }

    Button {
        id: btn_bg_1
        x: 31
        y: 28
        width: 173
        height: 166
        text: qsTr("Button")
        checkable: false
        font.family: "Times New Roman"
        display: AbstractButton.IconOnly
        Image {
            id: image3
            width: 318
            height: 204
            anchors.verticalCenterOffset: 0
            anchors.centerIn: parent
            sourceSize.height: button.background.height - 6
            source: "image/Desert/Ches.jpg"
            fillMode: Image.PreserveAspectFit
            anchors.horizontalCenterOffset: 1
        }
    }


    Button {
        id: btn_bg_2
        x: 44
        y: 250
        width: 147
        height: 146
        text: qsTr("Button")
        checkable: false
        font.family: "Times New Roman"
        display: AbstractButton.IconOnly
        Image {
            id: image1
            width: 232
            height: 182
            anchors.verticalCenterOffset: 0
            anchors.centerIn: parent
            sourceSize.height: button.background.height - 6
            source: "image/Desert/Conn.jpg"
            fillMode: Image.PreserveAspectFit
            anchors.horizontalCenterOffset: -1
        }
    }

    Button {
        id: btn_bg_3
        x: 253
        y: 28
        width: 202
        height: 166
        text: qsTr("Button")
        checkable: false
        font.family: "Times New Roman"
        display: AbstractButton.IconOnly
        Image {
            id: image2
            width: 202
            height: 208
            anchors.verticalCenterOffset: -7
            anchors.centerIn: parent
            sourceSize.height: button.background.height - 6
            source: "image/Desert/Shan.jpg"
            fillMode: Image.PreserveAspectFit
            anchors.horizontalCenterOffset: 0
        }
    }

}
