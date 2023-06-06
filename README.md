## Keyboard Hook Practice

### 前言
- 開發動機來自 [Aoi 2023/06/05 晚上的直播](https://www.youtube.com/watch?v=9eAVmmSTD58&t=7585s)。
- 也有順便剪了[小精華](https://youtu.be/WPq07hRVdo8)記錄一下。

### 說明
- 右邊的 Release 可以載執行檔。
  - **僅限 Windows 系統執行**，點開資料夾內的 exe 檔即可執行。
  - 執行後就可以縮小到其他視窗做事，只要按 Enter 鍵都會被抓到，然後就會有 Aoi 的叫聲XDD。
  - 建議不要狂按，有機率發生 Bug xD。
- 使用 Windows 函式庫，調用 hook 相關功能來偵測按鍵。並搭配 [PortAudio](https://github.com/PortAudio/portaudio) 及 [libSndfile](https://github.com/libsndfile/libsndfile) 來播放聲音。

### 聲明
- 只是寫好玩的，所以沒那麼自由可以自訂化。
  - 目前只有寫 Enter 鍵的部份。
  - 音效可以更改，但檔名要跟原音檔一致（Aoi_20230605.wav），只吃wav檔。
    - 原音效來自 [Aoi 2023/06/05 晚上的直播](https://www.youtube.com/watch?v=9eAVmmSTD58&t=7618s)
- <u>若有興趣，能夠自行 Clone、Fork 或下載 Source Code 看這些簡單的 Code，甚至改寫。</u>

### 備註
- 已知 Bug：
  - 程式開啟一段時間後會自行關閉，目前原因未知。 
- 若之後有機會再做自訂化及更多按鈕。
- 如有發現 Bug 可回報我，DC 直接私訊「!風凜魂太(void* Kalin);#1580」。
