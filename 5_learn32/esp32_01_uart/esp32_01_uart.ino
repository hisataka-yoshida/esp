/***********************************************************************
Practice 1: シリアル出力する
                                  Copyright (c) 2016-2019 Wataru KUNINO
***********************************************************************/

void setup() {                  // 起動時に一度だけ実行される関数
    Serial.begin(115200);       // シリアル通信速度を115200bpsに設定する
}

void loop() {                   // setup実行後に繰り返し実行される関数
    Serial.print("Hello, ");    // シリアルへ「Hello,」を出力する
    delay(200);                 // 時間待ち(200ms)
    Serial.println("world!");   // シリアルへ「world!」と改行を出力する
    delay(200);                 // 時間待ち(200ms)
}
