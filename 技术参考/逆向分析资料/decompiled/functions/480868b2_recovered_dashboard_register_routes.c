/* Firmware entry: 0x480868b2 */

/* Analyst-assigned name based on firmware call sites and string references. */

bool recovered_dashboard_register_routes(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined4 *puVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802e5c0();
  iVar2 = FUN_ram_48086534(&DAT_ram_4ff5ca80);
  if (iVar2 == 0) {
    FUN_ram_4802be74(&DAT_ram_4ff5bb3c,"[FATAL] CAN experiment preset storage initialization failed"
                    );
    return false;
  }
  DAT_ram_4ff5ca80 = &LAB_ram_4802c7a4;
  DAT_ram_4ff6de6e = 1;
  iVar2 = DAT_ram_4ff6def4;
  if (DAT_ram_4ff6def4 == 0) {
    iVar3 = FUN_ram_4ff206d8(0x5800,0x404);
    if (iVar3 != 0) {
      iVar2 = FUN_ram_4ff3aca6(0x200,0x2c,iVar3,&DAT_ram_4ff5cc24,0);
      if (iVar2 != 0) goto LAB_ram_48086900;
      FUN_ram_4ff209c6(iVar3);
    }
    DAT_ram_4ff6dea8 = FUN_ram_4ff3b144(1);
LAB_ram_480876fc:
    iVar2 = 0;
LAB_ram_480876fe:
    FUN_ram_4802be74(&DAT_ram_4ff5bb3c,"[FATAL] recorder pipeline unavailable");
  }
  else {
LAB_ram_48086900:
    DAT_ram_4ff6def4 = iVar2;
    FUN_ram_4ff3ec14(&DAT_ram_4ff47ebc,0xffffffff);
    fence();
    DAT_ram_4ff6df04 = 0;
    fence();
    DAT_ram_4ff6defa = 0;
    FUN_ram_4ff3ee10(&DAT_ram_4ff47ebc);
    iVar2 = FUN_ram_4802eb3a();
    DAT_ram_4ff6dea8 = FUN_ram_4ff3b144(1);
    if (iVar2 == 0) goto LAB_ram_480876fc;
    if (DAT_ram_4ff6dea8 == 0) goto LAB_ram_480876fe;
  }
  piVar1 = DAT_ram_4ff6df2c;
  if (DAT_ram_4ff6df2c != (int *)0x0) {
    pcVar5 = *(code **)(*DAT_ram_4ff6df2c + 0xf0);
    DAT_ram_4ff6df2c[3] = (int)&LAB_ram_4802fc50;
    piVar1[1] = (int)&LAB_ram_4802fc26;
    piVar1[2] = (int)&LAB_ram_4802fbfc;
    (*pcVar5)(piVar1,0,pcVar5);
    (**(code **)(*DAT_ram_4ff6df2c + 0x118))(DAT_ram_4ff6df2c,0);
  }
  iVar3 = FUN_ram_48025ba6();
  if ((*(char *)(DAT_ram_4ff6de38 + 0x720) == '\0') ||
     (999 < (uint)(iVar3 - *(int *)(DAT_ram_4ff6de38 + 0x724)))) {
    FUN_ram_48082b62();
  }
  DAT_ram_4ff5cbcc = FUN_ram_480a3450;
  DAT_ram_4ff5cbc0 = &LAB_ram_480a372e;
  DAT_ram_4ff5cbc4 = &LAB_ram_4811670a;
  DAT_ram_4ff5cbd8 = &LAB_ram_48030002;
  DAT_ram_4ff5cbd0 = &LAB_ram_480360ee;
  DAT_ram_4ff5cbd4 = FUN_ram_4803612e;
  if (DAT_ram_4ff5cbb1 != '\0') {
    if (DAT_ram_4ff5cbb4 == (undefined4 *)0x0) {
      DAT_ram_4ff5cbb2 = 1;
      puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
      if (puVar4 != (undefined4 *)0x0) {
        puVar6 = puVar4 + 0x180;
        DAT_ram_4ff5cbb4 = puVar4;
        do {
          *puVar4 = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[1] = 0xff;
          puVar4 = puVar4 + 4;
        } while (puVar4 != puVar6);
        goto LAB_ram_48086a18;
      }
LAB_ram_48087c36:
      DAT_ram_4ff5cbb1 = '\0';
      if (DAT_ram_4ff5cbb0 == '\0') goto LAB_ram_48086bd6;
      DAT_ram_4ff5cbb0 = '\0';
      FUN_ram_48064fb4(&DAT_ram_4ff5cba0);
    }
    else {
LAB_ram_48086a18:
      if (DAT_ram_4ff5cbb8 == 0x60) goto LAB_ram_48087c36;
      puVar4 = DAT_ram_4ff5cbb4 + DAT_ram_4ff5cbb8 * 4;
      DAT_ram_4ff5cbb8 = DAT_ram_4ff5cbb8 + 1;
      puVar4[3] = 0;
      *puVar4 = &DAT_ram_481b546c;
      puVar4[1] = 1;
      puVar4[2] = recovered_http_get_root_4808b134;
    }
    if (DAT_ram_4ff5cbb1 != '\0') {
      if (DAT_ram_4ff5cbb4 == (undefined4 *)0x0) {
        DAT_ram_4ff5cbb2 = 1;
        puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
        if (puVar4 != (undefined4 *)0x0) {
          puVar6 = puVar4 + 0x180;
          DAT_ram_4ff5cbb4 = puVar4;
          do {
            *puVar4 = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4[1] = 0xff;
            puVar4 = puVar4 + 4;
          } while (puVar4 != puVar6);
          goto LAB_ram_48086a66;
        }
LAB_ram_48087c16:
        DAT_ram_4ff5cbb1 = '\0';
        if (DAT_ram_4ff5cbb0 == '\0') goto LAB_ram_48086bd6;
        DAT_ram_4ff5cbb0 = '\0';
        FUN_ram_48064fb4(&DAT_ram_4ff5cba0);
      }
      else {
LAB_ram_48086a66:
        if (DAT_ram_4ff5cbb8 == 0x60) goto LAB_ram_48087c16;
        puVar4 = DAT_ram_4ff5cbb4 + DAT_ram_4ff5cbb8 * 4;
        DAT_ram_4ff5cbb8 = DAT_ram_4ff5cbb8 + 1;
        puVar4[3] = 0;
        *puVar4 = "/management/status";
        puVar4[1] = 1;
        puVar4[2] = recovered_http_get_management_status_480b2722;
      }
      if (DAT_ram_4ff5cbb1 != '\0') {
        if (DAT_ram_4ff5cbb4 == (undefined4 *)0x0) {
          DAT_ram_4ff5cbb2 = 1;
          puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
          if (puVar4 != (undefined4 *)0x0) {
            puVar6 = puVar4 + 0x180;
            DAT_ram_4ff5cbb4 = puVar4;
            do {
              *puVar4 = 0;
              puVar4[2] = 0;
              puVar4[3] = 0;
              puVar4[1] = 0xff;
              puVar4 = puVar4 + 4;
            } while (puVar6 != puVar4);
            goto LAB_ram_48086ab4;
          }
LAB_ram_48087d6e:
          DAT_ram_4ff5cbb1 = '\0';
          if (DAT_ram_4ff5cbb0 == '\0') goto LAB_ram_48086bd6;
          DAT_ram_4ff5cbb0 = '\0';
          FUN_ram_48064fb4(&DAT_ram_4ff5cba0);
        }
        else {
LAB_ram_48086ab4:
          if (DAT_ram_4ff5cbb8 == 0x60) goto LAB_ram_48087d6e;
          puVar4 = DAT_ram_4ff5cbb4 + DAT_ram_4ff5cbb8 * 4;
          DAT_ram_4ff5cbb8 = DAT_ram_4ff5cbb8 + 1;
          puVar4[3] = 0;
          *puVar4 = "/auth/login";
          puVar4[1] = 3;
          puVar4[2] = recovered_http_post_auth_login_4808a8c2;
        }
        if (DAT_ram_4ff5cbb1 != '\0') {
          if (DAT_ram_4ff5cbb4 == (undefined4 *)0x0) {
            DAT_ram_4ff5cbb2 = 1;
            puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
            if (puVar4 != (undefined4 *)0x0) {
              puVar6 = puVar4 + 0x180;
              DAT_ram_4ff5cbb4 = puVar4;
              do {
                *puVar4 = 0;
                puVar4[2] = 0;
                puVar4[3] = 0;
                puVar4[1] = 0xff;
                puVar4 = puVar4 + 4;
              } while (puVar6 != puVar4);
              goto LAB_ram_48086b02;
            }
LAB_ram_48087d4e:
            DAT_ram_4ff5cbb1 = '\0';
            if (DAT_ram_4ff5cbb0 == '\0') goto LAB_ram_48086bd6;
            DAT_ram_4ff5cbb0 = '\0';
            FUN_ram_48064fb4(&DAT_ram_4ff5cba0);
          }
          else {
LAB_ram_48086b02:
            if (DAT_ram_4ff5cbb8 == 0x60) goto LAB_ram_48087d4e;
            puVar4 = DAT_ram_4ff5cbb4 + DAT_ram_4ff5cbb8 * 4;
            DAT_ram_4ff5cbb8 = DAT_ram_4ff5cbb8 + 1;
            puVar4[3] = 0;
            *puVar4 = "/auth/logout";
            puVar4[1] = 3;
            puVar4[2] = recovered_http_post_auth_logout_4808adc8;
          }
          if (DAT_ram_4ff5cbb1 != '\0') {
            if (DAT_ram_4ff5cbb4 == (undefined4 *)0x0) {
              DAT_ram_4ff5cbb2 = 1;
              puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
              if (puVar4 != (undefined4 *)0x0) {
                puVar6 = puVar4 + 0x180;
                DAT_ram_4ff5cbb4 = puVar4;
                do {
                  *puVar4 = 0;
                  puVar4[2] = 0;
                  puVar4[3] = 0;
                  puVar4[1] = 0xff;
                  puVar4 = puVar4 + 4;
                } while (puVar6 != puVar4);
                goto LAB_ram_48086b50;
              }
LAB_ram_48087d8e:
              DAT_ram_4ff5cbb1 = '\0';
              if (DAT_ram_4ff5cbb0 == '\0') goto LAB_ram_48086bd6;
              DAT_ram_4ff5cbb0 = '\0';
              FUN_ram_48064fb4(&DAT_ram_4ff5cba0);
            }
            else {
LAB_ram_48086b50:
              if (DAT_ram_4ff5cbb8 == 0x60) goto LAB_ram_48087d8e;
              puVar4 = DAT_ram_4ff5cbb4 + DAT_ram_4ff5cbb8 * 4;
              DAT_ram_4ff5cbb8 = DAT_ram_4ff5cbb8 + 1;
              puVar4[3] = 0;
              *puVar4 = "/auth/status";
              puVar4[1] = 1;
              puVar4[2] = recovered_http_get_auth_status_480677f4;
            }
            if (DAT_ram_4ff5cbb1 != '\0') {
              if (DAT_ram_4ff5cbb4 == (undefined4 *)0x0) {
                DAT_ram_4ff5cbb2 = 1;
                puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
                if (puVar4 != (undefined4 *)0x0) {
                  puVar6 = puVar4 + 0x180;
                  DAT_ram_4ff5cbb4 = puVar4;
                  do {
                    *puVar4 = 0;
                    puVar4[2] = 0;
                    puVar4[3] = 0;
                    puVar4[1] = 0xff;
                    puVar4 = puVar4 + 4;
                  } while (puVar6 != puVar4);
                  goto LAB_ram_48086b9c;
                }
              }
              else {
LAB_ram_48086b9c:
                if (DAT_ram_4ff5cbb8 != 0x60) {
                  puVar4 = DAT_ram_4ff5cbb4 + DAT_ram_4ff5cbb8 * 4;
                  DAT_ram_4ff5cbb8 = DAT_ram_4ff5cbb8 + 1;
                  puVar4[3] = 0;
                  *puVar4 = "/generate_204";
                  puVar4[1] = 0xff;
                  puVar4[2] = recovered_http_any_generate_204_48067692;
                  goto LAB_ram_48086bd6;
                }
              }
              DAT_ram_4ff5cbb1 = '\0';
              if (DAT_ram_4ff5cbb0 != '\0') {
                DAT_ram_4ff5cbb0 = '\0';
                FUN_ram_48064fb4(&DAT_ram_4ff5cba0);
              }
            }
          }
        }
      }
    }
  }
LAB_ram_48086bd6:
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/gen_204",0xff,recovered_http_any_generate_204_48067692,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/hotspot-detect.html",0xff,
                   recovered_http_any_generate_204_48067692,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/health",1,recovered_http_get_health_480c2bda,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/web_metrics",1,recovered_http_get_web_metrics_4806f630,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/status_fast",1,recovered_http_get_status_fast_4806eb88,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/torque_nag/status",1,
                   recovered_http_get_torque_nag_status_4806e388,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/status",1,recovered_http_get_status_480c0178,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/runtime_status",1,recovered_http_get_runtime_status_4806851c,
                   0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/system_status",1,recovered_http_get_system_status_4808334c,0)
  ;
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/can_diag",1,recovered_http_get_can_diag_4807fa5c,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/can_hot_ids",1,recovered_http_get_can_hot_ids_480c037a,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/coredump/info",1,recovered_http_get_coredump_info_4806cbde,0)
  ;
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/coredump.bin",1,recovered_http_get_coredump_bin_4806d406,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/config",1,recovered_http_get_config_480bd450,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/config",3,recovered_http_post_config_48101f34,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/config/uss_radar",1,
                   recovered_http_get_config_uss_radar_4806afe2,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/config/uss_radar",3,
                   recovered_http_post_config_uss_radar_480f43a8,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/ambient_config",1,recovered_http_get_ambient_config_4806adda,
                   0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/ambient_config",3,recovered_http_post_ambient_config_480f584c
                   ,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/speed_target/config",1,
                   recovered_http_get_speed_target_config_480f99bc,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/speed_target/save",3,
                   recovered_http_post_speed_target_save_480f9322,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/can_pin_layout",1,recovered_http_get_can_pin_layout_480681de,
                   0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/can_pin_layout",3,recovered_http_post_can_pin_layout_480ff1e4
                   ,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/rear_fog/config",1,
                   recovered_http_get_rear_fog_config_48066e12,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/rear_fog/config",3,
                   recovered_http_post_rear_fog_config_480f4dda,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/rear_fog/runtime",3,
                   recovered_http_post_rear_fog_runtime_481015a6,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/config/ble_obstacle",3,
                   recovered_http_post_config_ble_obstacle_480f1e34,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/fsd_auto_start/master",3,
                   recovered_http_post_fsd_auto_start_master_480f2fc2,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/save",3,recovered_http_post_save_480f34ec,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/seat_action",3,recovered_http_post_seat_action_48100e14,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/driver_profiles",1,
                   recovered_http_get_driver_profiles_4806d76e,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/driver_profiles",3,
                   recovered_http_post_driver_profiles_480fa85c,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/fsd_records",1,recovered_http_get_fsd_records_480b4abe,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/fsd_records/clock",1,
                   recovered_http_get_fsd_records_clock_4806c0d4,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/fsd_records/clock",3,
                   recovered_http_post_fsd_records_clock_4806ef66,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/fsd_records/clear",3,
                   recovered_http_post_fsd_records_clear_480d338a,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/fsd_records/subtotal/reset",3,
                   recovered_http_post_fsd_records_subtotal_reset_480d2a5e,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/cloud/status",1,recovered_http_get_cloud_status_480d0b14,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/onboarding/status",1,
                   recovered_http_get_onboarding_status_4808d6c6,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/onboarding/complete",3,
                   recovered_http_post_onboarding_complete_4808e07e,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/cloud/agent/config",1,
                   recovered_http_get_cloud_agent_config_4808eb2e,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/cloud/agent/config",3,
                   recovered_http_post_cloud_agent_config_4808cf44,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/cloud/settings/restore",3,
                   recovered_http_post_cloud_settings_restore_480b6d24,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/cloud/settings/conflicts",1,
                   recovered_http_get_cloud_settings_conflicts_480b31d8,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/cloud/settings/conflict",3,
                   recovered_http_post_cloud_settings_conflict_480d103e,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/cloud/developer",3,
                   recovered_http_post_cloud_developer_4808d958,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/cloud/config",1,recovered_http_get_cloud_config_480b4fa4,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/cloud/config",3,recovered_http_post_cloud_config_480b3e2c,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/cloud/test",3,recovered_http_post_cloud_test_4811e15c,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/cloud/enabled",3,recovered_http_post_cloud_enabled_480b3e6c,0
                  );
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/cloud/upload",3,recovered_http_post_cloud_upload_4808cf68,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/rec_start",3,recovered_http_post_rec_start_480fd584,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/rec_stop",3,recovered_http_post_rec_stop_480fd45c,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/rec_clear",3,recovered_http_post_rec_clear_4806e04e,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/rec_status",1,recovered_http_get_rec_status_4806c4e8,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/rec_download",1,recovered_http_get_rec_download_4806fee2,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/wifi/status",1,recovered_http_get_wifi_status_48066f4c,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/wifi/scan",3,recovered_http_post_wifi_scan_4806b7e4,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/wifi/connect",3,recovered_http_post_wifi_connect_480f38e4,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/wifi/disconnect",3,
                   recovered_http_post_wifi_disconnect_480f2624,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/wifi/forget",3,recovered_http_post_wifi_forget_480f2918,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/wifi/ap-config",3,recovered_http_post_wifi_ap_config_480f3d2c
                   ,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/wifi/ap-auto-off",3,
                   recovered_http_post_wifi_ap_auto_off_480f2c14,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/ota/status",1,recovered_http_get_ota_status_4806bbf8,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/ota/start",3,recovered_http_post_ota_start_480ffd82,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/ota/cancel",3,recovered_http_post_ota_cancel_480ff590,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/ota/upload",3,recovered_http_post_ota_upload_480ff860,
                   FUN_ram_48064780);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/ota/online/status",1,
                   recovered_http_get_ota_online_status_480bdfce,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/ota/online/check",3,
                   recovered_http_post_ota_online_check_4806b9ae,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/ota/online/install",3,
                   recovered_http_post_ota_online_install_4807be92,0);
  FUN_ram_48065586(&DAT_ram_4ff5cb9c,"/reboot",3,recovered_http_post_reboot_480ffb40,0);
  DAT_ram_4ff6ded8 = &DAT_ram_4ff5cb9c;
  DAT_ram_4ff6ded4 = &DAT_ram_4ff5ca80;
  DAT_ram_4ff6ded0 = &LAB_ram_4802c7f4;
  if (DAT_ram_4ff5cbb1 == '\0') goto LAB_ram_48087662;
  if (DAT_ram_4ff5cbb4 == (undefined4 *)0x0) {
    DAT_ram_4ff5cbb2 = 1;
    puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
    if (puVar4 != (undefined4 *)0x0) {
      puVar6 = puVar4 + 0x180;
      DAT_ram_4ff5cbb4 = puVar4;
      do {
        *puVar4 = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[1] = 0xff;
        puVar4 = puVar4 + 4;
      } while (puVar6 != puVar4);
      goto LAB_ram_480873a8;
    }
LAB_ram_48087cee:
    DAT_ram_4ff5cbb1 = '\0';
    if (DAT_ram_4ff5cbb0 == '\0') goto LAB_ram_48087662;
    DAT_ram_4ff5cbb0 = '\0';
    FUN_ram_48064fb4(&DAT_ram_4ff5cba0);
  }
  else {
LAB_ram_480873a8:
    if (DAT_ram_4ff5cbb8 == 0x60) goto LAB_ram_48087cee;
    puVar4 = DAT_ram_4ff5cbb4 + DAT_ram_4ff5cbb8 * 4;
    DAT_ram_4ff5cbb8 = DAT_ram_4ff5cbb8 + 1;
    puVar4[3] = 0;
    *puVar4 = "/api/can-experiment/listen";
    puVar4[1] = 3;
    puVar4[2] = recovered_http_post_api_can_experiment_listen_480ed598;
  }
  if (DAT_ram_4ff5cbb1 == '\0') goto LAB_ram_48087662;
  if (DAT_ram_4ff5cbb4 == (undefined4 *)0x0) {
    DAT_ram_4ff5cbb2 = 1;
    puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
    if (puVar4 != (undefined4 *)0x0) {
      puVar6 = puVar4 + 0x180;
      DAT_ram_4ff5cbb4 = puVar4;
      do {
        *puVar4 = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[1] = 0xff;
        puVar4 = puVar4 + 4;
      } while (puVar6 != puVar4);
      goto LAB_ram_480873f0;
    }
LAB_ram_48087cce:
    DAT_ram_4ff5cbb1 = '\0';
    if (DAT_ram_4ff5cbb0 == '\0') goto LAB_ram_48087662;
    DAT_ram_4ff5cbb0 = '\0';
    FUN_ram_48064fb4(&DAT_ram_4ff5cba0);
  }
  else {
LAB_ram_480873f0:
    if (DAT_ram_4ff5cbb8 == 0x60) goto LAB_ram_48087cce;
    puVar4 = DAT_ram_4ff5cbb4 + DAT_ram_4ff5cbb8 * 4;
    DAT_ram_4ff5cbb8 = DAT_ram_4ff5cbb8 + 1;
    puVar4[3] = 0;
    *puVar4 = "/api/can-experiment/listen/stop";
    puVar4[1] = 3;
    puVar4[2] = recovered_http_post_api_can_experiment_listen_stop_480ecf86;
  }
  if (DAT_ram_4ff5cbb1 == '\0') goto LAB_ram_48087662;
  if (DAT_ram_4ff5cbb4 == (undefined4 *)0x0) {
    DAT_ram_4ff5cbb2 = 1;
    puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
    if (puVar4 != (undefined4 *)0x0) {
      puVar6 = puVar4 + 0x180;
      DAT_ram_4ff5cbb4 = puVar4;
      do {
        *puVar4 = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[1] = 0xff;
        puVar4 = puVar4 + 4;
      } while (puVar4 != puVar6);
      goto LAB_ram_48087438;
    }
LAB_ram_48087d2e:
    DAT_ram_4ff5cbb1 = '\0';
    if (DAT_ram_4ff5cbb0 == '\0') goto LAB_ram_48087662;
    DAT_ram_4ff5cbb0 = '\0';
    FUN_ram_48064fb4(&DAT_ram_4ff5cba0);
  }
  else {
LAB_ram_48087438:
    if (DAT_ram_4ff5cbb8 == 0x60) goto LAB_ram_48087d2e;
    puVar4 = DAT_ram_4ff5cbb4 + DAT_ram_4ff5cbb8 * 4;
    DAT_ram_4ff5cbb8 = DAT_ram_4ff5cbb8 + 1;
    puVar4[3] = 0;
    *puVar4 = "/api/can-experiment/source/confirm";
    puVar4[1] = 3;
    puVar4[2] = recovered_http_post_api_can_experiment_source_confirm_480ab7ba;
  }
  if (DAT_ram_4ff5cbb1 == '\0') goto LAB_ram_48087662;
  if (DAT_ram_4ff5cbb4 == (undefined4 *)0x0) {
    DAT_ram_4ff5cbb2 = 1;
    puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
    if (puVar4 != (undefined4 *)0x0) {
      puVar6 = puVar4 + 0x180;
      DAT_ram_4ff5cbb4 = puVar4;
      do {
        *puVar4 = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[1] = 0xff;
        puVar4 = puVar4 + 4;
      } while (puVar6 != puVar4);
      goto LAB_ram_48087480;
    }
LAB_ram_48087d0e:
    DAT_ram_4ff5cbb1 = '\0';
    if (DAT_ram_4ff5cbb0 == '\0') goto LAB_ram_48087662;
    DAT_ram_4ff5cbb0 = '\0';
    FUN_ram_48064fb4(&DAT_ram_4ff5cba0);
  }
  else {
LAB_ram_48087480:
    if (DAT_ram_4ff5cbb8 == 0x60) goto LAB_ram_48087d0e;
    puVar4 = DAT_ram_4ff5cbb4 + DAT_ram_4ff5cbb8 * 4;
    DAT_ram_4ff5cbb8 = DAT_ram_4ff5cbb8 + 1;
    puVar4[3] = 0;
    *puVar4 = "/api/can-experiment/validate";
    puVar4[1] = 3;
    puVar4[2] = recovered_http_post_api_can_experiment_validate_480ec3f8;
  }
  if (DAT_ram_4ff5cbb1 == '\0') goto LAB_ram_48087662;
  if (DAT_ram_4ff5cbb4 == (undefined4 *)0x0) {
    DAT_ram_4ff5cbb2 = 1;
    puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
    if (puVar4 != (undefined4 *)0x0) {
      puVar6 = puVar4 + 0x180;
      DAT_ram_4ff5cbb4 = puVar4;
      do {
        *puVar4 = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[1] = 0xff;
        puVar4 = puVar4 + 4;
      } while (puVar6 != puVar4);
      goto LAB_ram_480874c8;
    }
LAB_ram_48087c74:
    DAT_ram_4ff5cbb1 = '\0';
    if (DAT_ram_4ff5cbb0 == '\0') goto LAB_ram_48087662;
    DAT_ram_4ff5cbb0 = '\0';
    FUN_ram_48064fb4(&DAT_ram_4ff5cba0);
  }
  else {
LAB_ram_480874c8:
    if (DAT_ram_4ff5cbb8 == 0x60) goto LAB_ram_48087c74;
    puVar4 = DAT_ram_4ff5cbb4 + DAT_ram_4ff5cbb8 * 4;
    DAT_ram_4ff5cbb8 = DAT_ram_4ff5cbb8 + 1;
    puVar4[3] = 0;
    *puVar4 = "/api/can-experiment/start";
    puVar4[1] = 3;
    puVar4[2] = recovered_http_post_api_can_experiment_start_480eb56e;
  }
  if (DAT_ram_4ff5cbb1 == '\0') goto LAB_ram_48087662;
  if (DAT_ram_4ff5cbb4 == (undefined4 *)0x0) {
    DAT_ram_4ff5cbb2 = 1;
    puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
    if (puVar4 != (undefined4 *)0x0) {
      puVar6 = puVar4 + 0x180;
      DAT_ram_4ff5cbb4 = puVar4;
      do {
        *puVar4 = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[1] = 0xff;
        puVar4 = puVar4 + 4;
      } while (puVar6 != puVar4);
      goto LAB_ram_48087510;
    }
LAB_ram_48087c56:
    DAT_ram_4ff5cbb1 = '\0';
    if (DAT_ram_4ff5cbb0 == '\0') goto LAB_ram_48087662;
    DAT_ram_4ff5cbb0 = '\0';
    FUN_ram_48064fb4(&DAT_ram_4ff5cba0);
  }
  else {
LAB_ram_48087510:
    if (DAT_ram_4ff5cbb8 == 0x60) goto LAB_ram_48087c56;
    puVar4 = DAT_ram_4ff5cbb4 + DAT_ram_4ff5cbb8 * 4;
    DAT_ram_4ff5cbb8 = DAT_ram_4ff5cbb8 + 1;
    puVar4[3] = 0;
    *puVar4 = "/api/can-experiment/stop";
    puVar4[1] = 3;
    puVar4[2] = recovered_http_post_api_can_experiment_stop_480eab84;
  }
  if (DAT_ram_4ff5cbb1 == '\0') goto LAB_ram_48087662;
  if (DAT_ram_4ff5cbb4 == (undefined4 *)0x0) {
    DAT_ram_4ff5cbb2 = 1;
    puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
    if (puVar4 != (undefined4 *)0x0) {
      puVar6 = puVar4 + 0x180;
      DAT_ram_4ff5cbb4 = puVar4;
      do {
        *puVar4 = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[1] = 0xff;
        puVar4 = puVar4 + 4;
      } while (puVar6 != puVar4);
      goto LAB_ram_48087558;
    }
LAB_ram_48087cb0:
    DAT_ram_4ff5cbb1 = '\0';
    if (DAT_ram_4ff5cbb0 == '\0') goto LAB_ram_48087662;
    DAT_ram_4ff5cbb0 = '\0';
    FUN_ram_48064fb4(&DAT_ram_4ff5cba0);
  }
  else {
LAB_ram_48087558:
    if (DAT_ram_4ff5cbb8 == 0x60) goto LAB_ram_48087cb0;
    puVar4 = DAT_ram_4ff5cbb4 + DAT_ram_4ff5cbb8 * 4;
    DAT_ram_4ff5cbb8 = DAT_ram_4ff5cbb8 + 1;
    puVar4[3] = 0;
    *puVar4 = "/api/can-experiment/status";
    puVar4[1] = 1;
    puVar4[2] = recovered_http_get_api_can_experiment_status_480acf1c;
  }
  if (DAT_ram_4ff5cbb1 == '\0') goto LAB_ram_48087662;
  if (DAT_ram_4ff5cbb4 == (undefined4 *)0x0) {
    DAT_ram_4ff5cbb2 = 1;
    puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
    if (puVar4 != (undefined4 *)0x0) {
      puVar6 = puVar4 + 0x180;
      DAT_ram_4ff5cbb4 = puVar4;
      do {
        *puVar4 = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[1] = 0xff;
        puVar4 = puVar4 + 4;
      } while (puVar6 != puVar4);
      goto LAB_ram_4808759e;
    }
LAB_ram_48087c92:
    DAT_ram_4ff5cbb1 = '\0';
    if (DAT_ram_4ff5cbb0 == '\0') goto LAB_ram_48087662;
    DAT_ram_4ff5cbb0 = '\0';
    FUN_ram_48064fb4(&DAT_ram_4ff5cba0);
  }
  else {
LAB_ram_4808759e:
    if (DAT_ram_4ff5cbb8 == 0x60) goto LAB_ram_48087c92;
    puVar4 = DAT_ram_4ff5cbb4 + DAT_ram_4ff5cbb8 * 4;
    DAT_ram_4ff5cbb8 = DAT_ram_4ff5cbb8 + 1;
    puVar4[3] = 0;
    *puVar4 = "/api/can-experiment/presets";
    puVar4[1] = 1;
    puVar4[2] = recovered_http_get_api_can_experiment_presets_4806da0c;
  }
  if (DAT_ram_4ff5cbb1 == '\0') goto LAB_ram_48087662;
  if (DAT_ram_4ff5cbb4 == (undefined4 *)0x0) {
    DAT_ram_4ff5cbb2 = 1;
    puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
    if (puVar4 != (undefined4 *)0x0) {
      puVar6 = puVar4 + 0x180;
      DAT_ram_4ff5cbb4 = puVar4;
      do {
        *puVar4 = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[1] = 0xff;
        puVar4 = puVar4 + 4;
      } while (puVar6 != puVar4);
      goto LAB_ram_480875e4;
    }
LAB_ram_48087bda:
    DAT_ram_4ff5cbb1 = '\0';
    if (DAT_ram_4ff5cbb0 == '\0') goto LAB_ram_48087662;
    DAT_ram_4ff5cbb0 = '\0';
    FUN_ram_48064fb4(&DAT_ram_4ff5cba0);
  }
  else {
LAB_ram_480875e4:
    if (DAT_ram_4ff5cbb8 == 0x60) goto LAB_ram_48087bda;
    puVar4 = DAT_ram_4ff5cbb4 + DAT_ram_4ff5cbb8 * 4;
    DAT_ram_4ff5cbb8 = DAT_ram_4ff5cbb8 + 1;
    puVar4[3] = 0;
    *puVar4 = "/api/can-experiment/presets";
    puVar4[1] = 3;
    puVar4[2] = recovered_http_post_api_can_experiment_presets_480ac732;
  }
  if (DAT_ram_4ff5cbb1 == '\0') goto LAB_ram_48087662;
  if (DAT_ram_4ff5cbb4 == (undefined4 *)0x0) {
    DAT_ram_4ff5cbb2 = 1;
    puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
    if (puVar4 != (undefined4 *)0x0) {
      puVar6 = puVar4 + 0x180;
      DAT_ram_4ff5cbb4 = puVar4;
      do {
        *puVar4 = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[1] = 0xff;
        puVar4 = puVar4 + 4;
      } while (puVar4 != puVar6);
      goto LAB_ram_4808762a;
    }
  }
  else {
LAB_ram_4808762a:
    if (DAT_ram_4ff5cbb8 != 0x60) {
      puVar4 = DAT_ram_4ff5cbb4 + DAT_ram_4ff5cbb8 * 4;
      DAT_ram_4ff5cbb8 = DAT_ram_4ff5cbb8 + 1;
      puVar4[1] = 0;
      puVar4[3] = 0;
      *puVar4 = "/api/can-experiment/presets";
      puVar4[2] = recovered_http_delete_api_can_experiment_presets_4808a37e;
      goto LAB_ram_48087662;
    }
  }
  DAT_ram_4ff5cbb1 = '\0';
  if (DAT_ram_4ff5cbb0 != '\0') {
    DAT_ram_4ff5cbb0 = '\0';
    FUN_ram_48064fb4(&DAT_ram_4ff5cba0);
  }
LAB_ram_48087662:
  DAT_ram_4ff5cbbc = FUN_ram_4806b1f0;
  fence();
  DAT_ram_4ff6a638 = 0;
  if ((DAT_ram_4ff6deac == 0) &&
     (iVar3 = FUN_ram_4ff3e458(FUN_ram_48063aa0,"can_bg",0x2000,0,2,&DAT_ram_4ff6deac,1), iVar3 != 1
     )) {
    DAT_ram_4ff6deac = 0;
    FUN_ram_4802be74(&DAT_ram_4ff5bb3c,"[FATAL] can_bg task creation failed");
  }
  if ((DAT_ram_4ff6deb0 == 0) &&
     (iVar3 = FUN_ram_4ff3e458(FUN_ram_4811d76e,&DAT_ram_481c8cb0,0x4000,0,1,&DAT_ram_4ff6deb0,0),
     iVar3 != 1)) {
    DAT_ram_4ff6deb0 = 0;
    FUN_ram_4802be74(&DAT_ram_4ff5bb3c,"[FATAL] web task creation failed");
  }
  if ((((param_1 != 0) && (iVar2 != 0)) && (DAT_ram_4ff6dea8 != 0)) && (DAT_ram_4ff6deac != 0)) {
    return DAT_ram_4ff6deb0 != 0;
  }
  return false;
}


