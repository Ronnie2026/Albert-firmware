/* Firmware entry: 0x4ff3905e */

int FUN_ram_4ff3905e(undefined4 *param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 *extraout_a1;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  uint uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined2 uStack_54;
  undefined2 uStack_52;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *(ushort *)(param_1 + 0x12);
  uVar3 = (uint)uVar1;
  if (uVar3 == 1) {
    uVar2 = *(undefined2 *)(param_1 + 0x14);
    memset((void *)((int)&uStack_60 + 3),0,0x2d);
    puStack_64 = (undefined4 *)0x464c457f;
    uStack_60 = CONCAT22(CONCAT11(uStack_60._3_1_,(char)uVar1),&sedeleg);
    uStack_54 = 4;
    uStack_52 = FUN_ram_4ff3a5fa();
    uStack_40 = 0;
    uStack_4c = 0;
    uStack_44 = 0;
    uStack_34 = 0;
    uStack_3c = 0x200034;
    uStack_36 = 0x28;
    uStack_48 = 0x34;
    uStack_50 = uVar3;
    uStack_38 = uVar2;
    iVar16 = FUN_ram_4ff39db0(param_1 + 0x15,&puStack_64);
    if (iVar16 != 0) {
      uVar4 = FUN_ram_4ff44cee();
      ets_printf(s_E___lu___s___s__u___Write_ELF_he_ram_4ff5642c,uVar4,
                 s_esp_core_dump_elf_ram_4ff58514,s_elf_write_file_header_ram_4ff584dc,0x87,iVar16);
      if (*(short *)(param_1 + 0x12) != 2) {
        uVar4 = FUN_ram_4ff44cee();
        ets_printf(s_E___lu___s___s__u___ELF_header_w_ram_4ff56460,uVar4,
                   s_esp_core_dump_elf_ram_4ff58514,s_esp_core_dump_do_write_elf_pass_ram_4ff584f4,
                   0x30a,0xfffffffe);
        return -2;
      }
      uVar4 = FUN_ram_4ff44cee();
      ets_printf(s_E___lu___s___s__u___ELF_header_w_ram_4ff56460,uVar4,
                 s_esp_core_dump_elf_ram_4ff58514,s_esp_core_dump_do_write_elf_pass_ram_4ff584f4,
                 0x308,0xfffffffe);
      return -2;
    }
    uVar3 = (uint)*(ushort *)(param_1 + 0x12);
  }
  iVar16 = 0x34;
  if (uVar3 == 2) {
    iVar16 = 0;
  }
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  thunk_FUN_ram_4ff3a600();
  uVar4 = FUN_ram_4ff3e7ea(mhartid);
  uVar17 = FUN_ram_4ff385e0(uVar4,&uStack_70,0);
  iVar14 = 0;
  uVar19 = uVar17 & 0xffffffff00000000;
  if ((int)uVar17 == 0) {
LAB_ram_4ff390ac:
    puStack_64 = (undefined4 *)0x0;
    uStack_60 = 0;
    uStack_5c = 0;
LAB_ram_4ff390c2:
    iVar15 = (int)uVar19;
    uVar18 = FUN_ram_4ff3e918(&puStack_64,(int)(uVar19 >> 0x20));
    uVar4 = (undefined4)((ulonglong)uVar18 >> 0x20);
    if ((int)uVar18 != -1) {
      while (uVar3 = uStack_5c, uVar19 = CONCAT44(uVar4,iVar15), uStack_5c != 0) {
        uVar5 = FUN_ram_4ff3e7ea(mhartid);
        uVar19 = CONCAT44(&uStack_70,iVar15);
        if (uVar3 == uVar5) break;
        if (iVar14 == 5) goto LAB_ram_4ff39112;
        uVar18 = FUN_ram_4ff385e0(uVar3,&uStack_70,0);
        uVar19 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),iVar15);
        if ((int)uVar18 == 0) break;
        iVar6 = FUN_ram_4ff38c8c(param_1,&uStack_70);
        iVar15 = iVar15 + iVar6;
        if (*(short *)(param_1 + 0x12) == 1) {
          if (iVar6 < 0) {
            uVar4 = FUN_ram_4ff44cee();
            ets_printf(s_E___lu___s___s__u___Task__x__PR__ram_4ff564a0,uVar4,
                       s_esp_core_dump_elf_ram_4ff58514,s_elf_process_tasks_regs_ram_4ff584ac,0x1c0,
                       uVar3,iVar6);
            goto LAB_ram_4ff39470;
          }
        }
        else if (iVar6 < 1) {
          uVar4 = FUN_ram_4ff44cee();
          ets_printf(s_E___lu___s___s__u___Task__x__PR__ram_4ff564a0,uVar4,
                     s_esp_core_dump_elf_ram_4ff58514,s_elf_process_tasks_regs_ram_4ff584ac,0x1c2,
                     uVar3,iVar6);
          goto LAB_ram_4ff39470;
        }
        iVar14 = iVar14 + 1;
        uVar18 = FUN_ram_4ff3e918(&puStack_64);
        uVar4 = (undefined4)((ulonglong)uVar18 >> 0x20);
        if ((int)uVar18 == -1) goto LAB_ram_4ff39112;
      }
      goto LAB_ram_4ff390c2;
    }
LAB_ram_4ff39112:
    iVar14 = FUN_ram_4ff38f82(param_1,iVar15);
    if (0 < iVar14) {
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_78 = 0;
      iStack_74 = 0;
      thunk_FUN_ram_4ff3a600();
      uVar3 = FUN_ram_4ff3e7ea(mhartid);
      uVar18 = FUN_ram_4ff385e0(uVar3,&uStack_70,&uStack_78);
      puVar12 = (undefined4 *)((ulonglong)uVar18 >> 0x20);
      if ((int)uVar18 == 0) {
        iVar15 = 0;
        iVar6 = 0;
      }
      else {
        uVar18 = FUN_ram_4ff38e4a(param_1,&uStack_70);
        puVar12 = (undefined4 *)((ulonglong)uVar18 >> 0x20);
        iVar6 = (int)uVar18;
        if (iVar6 < 1) {
          uVar4 = FUN_ram_4ff44cee();
          ets_printf(s_E___lu___s___s__u___Task__x__TCB_ram_4ff5631c,uVar4,
                     s_esp_core_dump_elf_ram_4ff58514,s_elf_process_task_data_ram_4ff58424,0x203,
                     uVar3,iVar6);
          goto LAB_ram_4ff39498;
        }
        if (iStack_74 != 0) {
          uVar18 = FUN_ram_4ff38ce4(param_1,uStack_78);
          puVar12 = (undefined4 *)((ulonglong)uVar18 >> 0x20);
          iVar15 = (int)uVar18;
          if (0 < iVar15) {
            iVar6 = iVar6 + iVar15;
            iVar15 = 1;
            goto LAB_ram_4ff39148;
          }
          uVar4 = FUN_ram_4ff44cee();
          ets_printf(s_E___lu___s___s__u___Interrupted_t_ram_4ff56574,uVar4,
                     s_esp_core_dump_elf_ram_4ff58514,s_elf_save_interrupted_stack_ram_4ff58408,
                     0x1ed,iVar15);
          puVar12 = extraout_a1;
        }
        iVar15 = 1;
      }
LAB_ram_4ff39148:
      puStack_64 = (undefined4 *)0x0;
      uStack_60 = 0;
      uStack_5c = 0;
      iVar13 = iVar6;
LAB_ram_4ff39152:
      iVar7 = FUN_ram_4ff3e918(&puStack_64,puVar12);
      iVar6 = iVar13;
      if (iVar7 != -1) {
        while ((puVar12 = &uStack_70, uStack_5c != 0 && (uVar3 != uStack_5c))) {
          iVar6 = iVar13;
          if (4 < iVar15) goto LAB_ram_4ff39196;
          iVar6 = FUN_ram_4ff385e0(uStack_5c,puVar12,0);
          iVar15 = iVar15 + 1;
          puVar12 = &uStack_70;
          if (iVar6 == 0) break;
          iVar6 = FUN_ram_4ff38e4a(param_1);
          if (iVar6 < 1) {
            uVar4 = FUN_ram_4ff44cee();
            ets_printf(s_E___lu___s___s__u___Task__x__TCB_ram_4ff5631c,uVar4,
                       s_esp_core_dump_elf_ram_4ff58514,s_elf_process_task_data_ram_4ff58424,0x220,
                       uStack_5c,iVar6);
            goto LAB_ram_4ff39498;
          }
          iVar13 = iVar13 + iVar6;
          iVar7 = FUN_ram_4ff3e918(&puStack_64);
          iVar6 = iVar13;
          if (iVar7 == -1) goto LAB_ram_4ff39196;
        }
        goto LAB_ram_4ff39152;
      }
LAB_ram_4ff39196:
      if (iVar6 < 1) goto LAB_ram_4ff39498;
      puStack_64 = (undefined4 *)0x0;
      iVar13 = 0;
      iVar15 = 0;
      do {
        iVar7 = FUN_ram_4ff3869c(iVar13,&puStack_64);
        if (iVar7 < 0) {
          uVar4 = FUN_ram_4ff44cee();
          ets_printf(s_E___lu___s___s__u___invalid_memo_ram_4ff565f8,uVar4,
                     s_esp_core_dump_elf_ram_4ff58514,s_elf_write_core_dump_user_data_ram_4ff583b0,
                     0x279);
          iVar15 = -3;
          goto LAB_ram_4ff395f4;
        }
        iVar8 = iVar15;
        if (iVar7 != 0) {
          iVar8 = FUN_ram_4ff38ce4(param_1,puStack_64,puStack_64,iVar7);
          if (iVar8 < 1) {
            uVar4 = FUN_ram_4ff44cee();
            ets_printf(s_E___lu___s___s__u___memory_regio_ram_4ff56624,uVar4,
                       s_esp_core_dump_elf_ram_4ff58514,s_elf_write_core_dump_user_data_ram_4ff583b0
                       ,0x27d,iVar8);
            break;
          }
          iVar8 = iVar15 + iVar8;
        }
        iVar13 = iVar13 + 1;
        iVar15 = iVar8;
      } while (iVar13 != 5);
      iVar15 = iVar8;
      if (iVar8 < 0) {
LAB_ram_4ff395f4:
        uVar10 = FUN_ram_4ff44cee();
        pcVar11 = s_E___lu___s___s__u___memory_regio_ram_4ff56664;
        uVar4 = 0x314;
        goto LAB_ram_4ff39558;
      }
      uStack_70 = 0;
      strlcpy(param_1 + 1,&DAT_ram_4ff589e0,0x42);
      uVar4 = FUN_ram_4ff387cc();
      *param_1 = uVar4;
      iVar15 = FUN_ram_4ff38b20(param_1,s_ESP_CORE_DUMP_INFO_ram_4ff566a8,0x204a,param_1,0x48);
      if (iVar15 < 1) {
        uVar4 = FUN_ram_4ff44cee();
        ets_printf(s_E___lu___s___s__u___Version_info_ram_4ff566bc,uVar4,
                   s_esp_core_dump_elf_ram_4ff58514,s_elf_write_core_dump_info_ram_4ff58394,0x2d6,
                   iVar15);
      }
      else {
        iVar13 = FUN_ram_4ff3a918(&uStack_70);
        if (iVar13 == 0) {
          uVar4 = FUN_ram_4ff44cee();
          ets_printf(s_E___lu___s__Zero_size_extra_info_ram_4ff56700,uVar4,
                     s_esp_core_dump_elf_ram_4ff58514);
          iVar15 = -3;
        }
        else {
          iVar13 = FUN_ram_4ff38b20(param_1,s_ESP_EXTRA_INFO_ram_4ff56724,0x2a5,uStack_70);
          if (iVar13 < 1) {
            uVar4 = FUN_ram_4ff44cee();
            ets_printf(s_E___lu___s___s__u___Extra_info_n_ram_4ff56734,uVar4,
                       s_esp_core_dump_elf_ram_4ff58514,s_elf_write_core_dump_info_ram_4ff58394,
                       0x2e4,iVar13);
            iVar15 = iVar13;
          }
          else {
            iVar13 = iVar15 + iVar13;
            if (DAT_ram_4ff6e11c != '\0') {
              uStack_60 = 0;
              uVar3 = uStack_5c >> 8;
              uStack_5c = uStack_5c & 0xffffff00;
              puStack_64 = param_1;
              if (*(short *)(param_1 + 0x12) == 0) {
                uStack_5c = CONCAT31((int3)uVar3,1);
                FUN_ram_48130dae(FUN_ram_4ff3894c,&puStack_64,0);
                if (uStack_60 == 0) {
                  uVar4 = FUN_ram_4ff44cee();
                  ets_printf(s_E___lu___s___s__u___wdt_panic_me_ram_4ff56778,uVar4,
                             s_esp_core_dump_elf_ram_4ff58514,
                             s_elf_add_wdt_panic_details_ram_4ff58378,0x2aa);
                  iVar15 = -3;
                  goto LAB_ram_4ff39538;
                }
                param_1[0x21] = uStack_60;
                uVar3 = uStack_60 + 3U & 0xfffffffc;
              }
              else {
                if (*(short *)(param_1 + 0x12) == 2) {
                  iVar15 = FUN_ram_4ff3899e(param_1,s_ESP_PANIC_DETAILS_ram_4ff567ac,param_1[0x21],
                                            0x2a7);
                  if (iVar15 == 0) {
                    FUN_ram_48130dae(FUN_ram_4ff3894c,&puStack_64,0);
                    if (uStack_60 != 0) {
                      uVar3 = param_1[0x21] + 3 & 0xfffffffc;
                      if (0 < (int)(uVar3 - param_1[0x21])) {
                        uStack_78 = uStack_78 & 0xff000000;
                        iVar15 = FUN_ram_4ff39db0(param_1 + 0x15,&uStack_78);
                        if (iVar15 != 0) {
                          uVar4 = FUN_ram_4ff44cee();
                          ets_printf(s_E___lu___s___s__u___Write_ELF_no_ram_4ff567c0,uVar4,
                                     s_esp_core_dump_elf_ram_4ff58514,
                                     s_elf_add_wdt_panic_details_ram_4ff58378,700,iVar15);
                          iVar15 = -2;
                          goto LAB_ram_4ff39538;
                        }
                        uVar3 = param_1[0x21] + 3 & 0xfffffffc;
                      }
                      goto LAB_ram_4ff395b8;
                    }
                    uVar4 = FUN_ram_4ff44cee();
                    ets_printf(s_E___lu___s___s__u___Write_ELF_no_ram_4ff56160,uVar4,
                               s_esp_core_dump_elf_ram_4ff58514,
                               s_elf_add_wdt_panic_details_ram_4ff58378,0x2b6,0);
                    iVar15 = -2;
                  }
                  else {
                    iVar15 = -2;
                  }
                  goto LAB_ram_4ff39538;
                }
                uVar3 = param_1[0x21] + 3 & 0xfffffffc;
              }
LAB_ram_4ff395b8:
              iVar15 = uVar3 + 0x20;
              iVar13 = iVar13 + iVar15;
              if (iVar15 < 1) goto LAB_ram_4ff39538;
            }
            pcVar11 = DAT_ram_4ff6d958;
            if ((DAT_ram_4ff6d958 != (char *)0x0) && (*DAT_ram_4ff6d958 != '\0')) {
              sVar9 = strlen(DAT_ram_4ff6d958);
              iVar15 = FUN_ram_4ff38b20(param_1,s_ESP_PANIC_DETAILS_ram_4ff567ac,0x2a7,pcVar11,sVar9
                                       );
              iVar13 = iVar13 + iVar15;
              if (iVar15 < 1) {
                uVar4 = FUN_ram_4ff44cee();
                ets_printf(s_E___lu___s___s__u___Panic_detail_ram_4ff567fc,uVar4,
                           s_esp_core_dump_elf_ram_4ff58514,s_elf_write_core_dump_info_ram_4ff58394,
                           0x2f8,iVar15);
                goto LAB_ram_4ff39538;
              }
            }
            iVar15 = FUN_ram_4ff38f82(param_1,iVar13);
            if (0 < iVar15) {
              return iVar15 + iVar14 + iVar6 + iVar16 + iVar8;
            }
            uVar4 = FUN_ram_4ff44cee();
            ets_printf(s_E___lu___s___s__u___EXTRA_INFO_n_ram_4ff56844,uVar4,
                       s_esp_core_dump_elf_ram_4ff58514,s_elf_write_core_dump_info_ram_4ff58394,
                       0x2fd,iVar15);
          }
        }
      }
LAB_ram_4ff39538:
      uVar10 = FUN_ram_4ff44cee();
      pcVar11 = s_E___lu___s___s__u___Version_info_ram_4ff56894;
      uVar4 = 0x31a;
LAB_ram_4ff39558:
      ets_printf(pcVar11,uVar10,s_esp_core_dump_elf_ram_4ff58514,
                 s_esp_core_dump_do_write_elf_pass_ram_4ff584f4,uVar4,iVar15);
      return iVar15;
    }
    uVar4 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s___s__u___PR_STATUS_no_ram_4ff564e4,uVar4,
               s_esp_core_dump_elf_ram_4ff58514,s_elf_process_tasks_regs_ram_4ff584ac,0x1c9,iVar14);
    iVar6 = iVar14;
  }
  else {
    uVar19 = FUN_ram_4ff38c8c(param_1,&uStack_70);
    iVar6 = (int)uVar19;
    iVar14 = 1;
    if (*(short *)(param_1 + 0x12) == 1) {
      iVar14 = 1;
      if (-1 < iVar6) goto LAB_ram_4ff390ac;
      uVar10 = FUN_ram_4ff44cee();
      ets_printf(s_E___lu___s___s__u___Task__x__PR__ram_4ff564a0,uVar10,
                 s_esp_core_dump_elf_ram_4ff58514,s_elf_process_tasks_regs_ram_4ff584ac,0x1a7,uVar4,
                 iVar6);
    }
    else {
      if (0 < iVar6) goto LAB_ram_4ff390ac;
      uVar10 = FUN_ram_4ff44cee();
      ets_printf(s_E___lu___s___s__u___Task__x__PR__ram_4ff564a0,uVar10,
                 s_esp_core_dump_elf_ram_4ff58514,s_elf_process_tasks_regs_ram_4ff584ac,0x1a9,uVar4,
                 iVar6);
    }
  }
LAB_ram_4ff39470:
  uVar4 = FUN_ram_4ff44cee();
  ets_printf(s_E___lu___s___s__u___Tasks_regs_a_ram_4ff56534,uVar4,s_esp_core_dump_elf_ram_4ff58514,
             s_elf_write_tasks_data_ram_4ff584c4,0x22d,iVar6);
LAB_ram_4ff39498:
  uVar4 = FUN_ram_4ff44cee();
  ets_printf(s_E___lu___s___s__u___ELF_Size_wri_ram_4ff565bc,uVar4,s_esp_core_dump_elf_ram_4ff58514,
             s_esp_core_dump_do_write_elf_pass_ram_4ff584f4,0x30f,iVar6);
  return iVar6;
}


