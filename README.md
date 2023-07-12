## 有聲鍵盤（Audio Keyboard）
##### Practice Keyboard Hook and Audio process using C++

### 前言
- 開發動機來自 [Aoi 2023/06/05 晚上的直播](https://www.youtube.com/watch?v=9eAVmmSTD58&t=7585s)。
- 也有順便剪了[小精華](https://youtu.be/WPq07hRVdo8)記錄一下。

### 說明（要安裝請看我）
- **右邊的 Releases 可以安裝執行檔**。 （還是 1.0.0 版，2.0.0 還未包）
  - **僅限 Windows 系統執行**，點開資料夾內的 exe 檔即可執行。
  - 執行後就可以縮小到其他視窗做事，只要按 Enter 鍵都會被抓到，然後就會有 Aoi 的叫聲XDD。
  - 建議不要狂按，有機率發生 Bug xD。

### 聲明
> 若有興趣，能夠自行 Clone、Fork 或下載 Source Code，甚至改寫都是沒問題的。

### 備註
- 如有發現 Bug 要回報或有想法想跟我討論，歡迎 DC 直接私訊「!風凜魂太(void* Kalin);#1580」。

---

### Dev. Logs
#### 2023/06/06 version: 1.0.0
- 只是寫好玩的，沒那麼自由可以自訂化。
  - 只有寫 Enter 鍵的部份。
  - 音效可以更改，但檔名要跟原音檔一致（Aoi_20230605.wav），只吃wav檔。
  - 原音效來自 [Aoi 2023/06/05 晚上的直播](https://www.youtube.com/watch?v=9eAVmmSTD58&t=7618s)
- 搭配 Windows 函式庫，調用 hook 相關功能來偵測按鍵。並搭配 [PortAudio](https://github.com/PortAudio/portaudio) 及 [libSndfile](https://github.com/libsndfile/libsndfile) 來播放聲音。
- 執行後會被防毒軟體擋掉，需將程式加入白名單或關閉防毒，才可正常執行。
#### 2023/07/13 version: 2.0.0
- 使用 C++/CLI .NET Frameworks 撰寫 UI。
  - **讓使用者能自行自定義各按鍵的音效**。
  - 新增多語系介面（目前僅中文及英文）。
  - 1.0.0 被防毒軟體擋掉的問題已解決。
- 新增設定檔（INI File）讀寫，儲存使用者設定。
- 更改聲音引擎，改為遊戲引擎常用的 [fmod](https://www.fmod.com/)（~~算比較熟悉吧XD~~）。
