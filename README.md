## 有聲鍵盤（Audio Keyboard）
## 喔齁喔齁鍵盤（O-Hou O-Hou Keyvboard）
Practice Keyboard Hook and Audio process using C++

### 前言
- 開發動機
  - 來自 [Aoi Hinamori 2023/06/05 晚上的直播](https://www.youtube.com/watch?v=9eAVmmSTD58&t=7585s)。
  - 買 [Aoi 聯名鍵帽](https://www.inpad.com.tw/product.php?act=view&id=9313)，要會發出聲音XDD。
- 也有順便剪了[小精華](https://youtu.be/WPq07hRVdo8)記錄一下（此時是version 1.0.0）。

### 說明（安裝與使用說明請看我）
- **右邊的 Releases 可以安裝執行檔**。
  - **僅限 Windows 系統執行**，解壓縮後點開資料夾內的 exe 檔即可執行。
  - 執行後就可以縮小到其他視窗做事，基本上所有按鍵都會被抓到，有設定音檔的按鍵就會有聲音。
  - 壓縮檔內有預設的設定（在 INI file 內，若此檔刪除會新建空白的設定檔）。
  - Settings 頁面可以自行設定按鍵（按 UI 或按鍵盤按鍵都能夠設定）。
  - **執行後有可能會被防毒軟體擋掉，需將程式加入白名單或關閉防毒**，方可正常執行。
  - 建議不要按得太激烈，可能會發生 Bug xD。

### 備註
> 若有興趣，歡迎自行 Clone、Fork 或下載 Source Code，甚至改寫都是沒問題的。
- 如有發現 Bug 要回報或有想法想跟我討論，歡迎 DC 直接私訊「!風凜魂太(void* Kalin);#1580」。
- 也歡迎訂閱台灣 Vtuber 個人勢 [Aoi Hinamori](https://www.youtube.com/@AoiHinamoriCh)！
- 從第一版改到第二版路途不算順利QQ
  - 中間忙於期末考及實驗室的東西，所以隔了一個月才更新。
  - 又被一堆白癡編碼問題搞死= =

---

### Dev. Logs
#### 2023/06/06 version: 1.0.0
- 只是寫好玩的，沒那麼自由可以自訂化。
  - 只有寫 Enter 鍵的部份。
  - 音效可以更改，但檔名要跟原音檔一致（Aoi_20230605.wav），只吃wav檔。
  - 原音效來自 [Aoi 2023/06/05 晚上的直播](https://www.youtube.com/watch?v=9eAVmmSTD58&t=7618s)
- 搭配 Windows 函式庫，調用 hook 相關功能來偵測按鍵。並搭配 [PortAudio](https://github.com/PortAudio/portaudio) 及 [libSndfile](https://github.com/libsndfile/libsndfile) 來播放聲音。
#### 2023/07/13 version: 2.0.0
- 使用 C++/CLI .NET Frameworks 撰寫 UI。
  - **讓使用者能自行自定義各按鍵的音效**。
	- 偵測使用者按什麼按鍵並設定，或是從 UI 設定。
  - 新增多語系介面（目前僅中文及英文）。
- 新增設定檔（INI File）讀寫，儲存使用者設定。
- 更改聲音引擎，改為遊戲引擎常用的 [fmod](https://www.fmod.com/)（~~算比較熟悉吧XD~~）。
  - mp3, wav, ogg 等，理論上常見的音檔格式都吃。
#### 2023/07/15 version: 2.0.1
- 更改程式名稱「歐齁喔齁鍵盤（O-Hou O-Hou Keyvboard）」
  - 專案被 [Aoi Hinamori](https://www.youtube.com/@AoiHinamoriCh) 賜名──「歐齁喔齁鍵盤（O-Hou O-Hou Keyvboard）」。[在直播上被賜名的瞬間](https://youtu.be/U6p2EfccTIU?t=3376)