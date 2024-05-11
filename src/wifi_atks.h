#include <WiFi.h>

extern wifi_ap_record_t ap_record;  
// Default Drauth Frame
extern const uint8_t deauth_frame_default[];

extern uint8_t deauth_frame[]; // 26 = [sizeof(deauth_frame_default[])]

/**
 * @brief Sends frame in frame_buffer using esp_wifi_80211_tx but bypasses blocking mechanism
 * 
 * @param frame_buffer 
 * @param size size of frame buffer
 */
void wsl_bypasser_send_raw_frame(const uint8_t *frame_buffer, int size);

/**
 * @brief Sends deauthentication frame with forged source AP from given ap_record
 *  
 * This will send deauthentication frame acting as frame from given AP, and destination will be broadcast
 * MAC address - \c ff:ff:ff:ff:ff:ff
 * 
 * @param ap_record AP record with valid AP information 
 * @param chan Channel of the targetted AP
 */
void wsl_bypasser_send_raw_frame(const wifi_ap_record_t *ap_record, uint8_t chan);

void wifi_atk_info(String tssid,String mac, uint8_t channel);

void wifi_atk_menu();

void target_atk_menu(String tssid,String mac, uint8_t channel);

void target_atk(String tssid,String mac, uint8_t channel);