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
            source: "image/Drink/Cafe.jpg"
            fillMode: Image.PreserveAspectFit
            anchors.horizontalCenterOffset: 1
        }
    }


    Button {
        id: btn_bg_2
        x: 227
        y: 8
        width: 153
        height: 158
        text: qsTr("Button")
        checkable: false
        font.family: "Times New Roman"
        display: AbstractButton.IconOnly
        Image {
            id: image1
            width: 248
            height: 204
            anchors.verticalCenterOffset: 4
            anchors.centerIn: parent
            sourceSize.height: button.background.height - 6
            source: "image/Drink/Chil.jpg"
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
            width: 244
            height: 222
            anchors.verticalCenterOffset: 2
            anchors.centerIn: parent
            sourceSize.height: button.background.height - 6
            source: "image/Drink/Coke.jpg"
            fillMode: Image.PreserveAspectFit
            anchors.horizontalCenterOffset: 10
        }
    }

    Button {
        id: btn_bg_4
        x: 17
        y: 244
        width: 183
        height: 106
        text: qsTr("Button")
        font.capitalization: Font.AllUppercase
        checkable: false
        font.family: "Courier"
        display: AbstractButton.IconOnly
        Image {
            id: image
            width: 224
            height: 236
            fillMode: Image.PreserveAspectFit
            anchors.centerIn: parent
            sourceSize.height: button.background.height - 6
            anchors.verticalCenterOffset: 25
            anchors.horizontalCenterOffset: 5
            source: "image/Drink/ShBa.jpg"
        }
    }

    Button {
        id: btn_bg_5
        x: 214
        y: 239
        width: 166
        height: 153
        text: qsTr("Button")
        checkable: false
        Image {
            id: image4
            width: 252
            height: 214
            anchors.verticalCenterOffset: 5
            source: "image/Drink/ShCh.jpg"
            anchors.horizontalCenterOffset: 22
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
        width: 164
        height: 100
        text: qsTr("Button")
        checkable: false
        Image {
            id: image5
            width: 248
            height: 198
            anchors.verticalCenterOffset: 11
            source: "image/Drink/ShSt.jpg"
            anchors.horizontalCenterOffset: 20
            fillMode: Image.PreserveAspectFit
            sourceSize.height: button.background.height - 6
            anchors.centerIn: parent
        }
        display: AbstractButton.IconOnly
        font.family: "Times New Roman"
    }

}
