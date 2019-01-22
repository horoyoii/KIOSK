import QtQuick 2.9
import QtQuick.Controls 2.2

Page {
    width: 600
    height: 400
    property alias btn_bg_6: btn_bg_6
    property alias btn_bg_5: btn_bg_5
    property alias btn_bg_3: btn_bg_3
    property alias btn_bg_2: btn_bg_2
    property alias btn_bg_1: btn_bg_1
    property alias btn_bg_4: btn_bg_4
    property alias image: image

    header: Label {
        text: qsTr("Page (1/2)")
        font.pixelSize: Qt.application.font.pixelSize * 2
        padding: 10
    }

    Button {
        id: btn_bg_1
        x: 17
        y: 8
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
            source: "image/bg_ss.jpg"
            fillMode: Image.PreserveAspectFit
            anchors.horizontalCenterOffset: 1
        }
    }


    Button {
        id: btn_bg_2
        x: 227
        y: 28
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
            source: "image/bg_double_bul.jpg"
            fillMode: Image.PreserveAspectFit
            anchors.horizontalCenterOffset: -1
        }
    }

    Button {
        id: btn_bg_3
        x: 398
        y: 8
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
            anchors.verticalCenterOffset: 0
            anchors.centerIn: parent
            sourceSize.height: button.background.height - 6
            source: "image/bg_lucky_gold.jpg"
            fillMode: Image.PreserveAspectFit
            anchors.horizontalCenterOffset: 0
        }
    }

    Button {
        id: btn_bg_4
        x: 22
        y: 277
        width: 173
        height: 149
        text: qsTr("Button")
        font.capitalization: Font.AllUppercase
        checkable: false
        font.family: "Courier"
        display: AbstractButton.IconOnly
        Image {
            id: image
            width: 188
            height: 232
            fillMode: Image.PreserveAspectFit
            anchors.centerIn: parent
            sourceSize.height: button.background.height - 6
            anchors.verticalCenterOffset: 0
            anchors.horizontalCenterOffset: -1
            source: "image/Big.jpg"
        }
    }

    Button {
        id: btn_bg_5
        x: 214
        y: 269
        width: 173
        height: 166
        text: qsTr("Button")
        checkable: false
        Image {
            id: image4
            width: 318
            height: 220
            anchors.verticalCenterOffset: 0
            source: "image/Sanghai.jpg"
            anchors.horizontalCenterOffset: 1
            fillMode: Image.PreserveAspectFit
            sourceSize.height: button.background.height - 6
            anchors.centerIn: parent
        }
        display: AbstractButton.IconOnly
        font.family: "Times New Roman"
    }

    Button {
        id: btn_bg_6
        x: 413
        y: 259
        width: 173
        height: 187
        text: qsTr("Button")
        checkable: false
        Image {
            id: image5
            width: 268
            height: 206
            anchors.verticalCenterOffset: 0
            source: "image/1955.jpg"
            anchors.horizontalCenterOffset: 1
            fillMode: Image.PreserveAspectFit
            sourceSize.height: button.background.height - 6
            anchors.centerIn: parent
        }
        display: AbstractButton.IconOnly
        font.family: "Times New Roman"
    }

}
