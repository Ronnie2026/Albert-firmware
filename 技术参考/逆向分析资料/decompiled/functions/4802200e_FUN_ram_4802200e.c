/* Firmware entry: 0x4802200e */

void FUN_ram_4802200e(void)

{
  code cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  char cVar10;
  undefined4 uVar11;
  uint uStack_74;
  int iStack_6c;
  code *pcStack_64;
  uint uStack_5c;
  int local_58;
  uint uStack_54;
  code *pcStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  code *pcStack_44;
  
  local_58 = 0;
  uStack_54 = 0;
  pcStack_50 = (code *)0x0;
  uStack_4c = 0;
  uStack_48 = 0;
  pcStack_44 = (code *)0x0;
  while (DAT_ram_4ff6dbac == '\0') {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x28))(10);
  }
  pcStack_64 = (code *)&LAB_ram_48021a40;
  do {
    do {
      do {
        while( true ) {
          local_58 = 0;
          uStack_54 = 0;
          pcStack_50 = (code *)0x0;
          uStack_4c = 0;
          uStack_48 = 0;
          pcStack_44 = (code *)0x0;
          (**(code **)(PTR_PTR_ram_4ff47e40 + 0x6c))(DAT_ram_4ff6dbbc,0xffffffff);
          iVar2 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x40))(DAT_ram_4ff5b2f4,&local_58,0);
          if ((((iVar2 != 0) &&
               (iVar2 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x40))(DAT_ram_4ff5b2f8,&local_58,0),
               iVar2 != 0)) &&
              (iVar2 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x40))(DAT_ram_4ff5b2fc,&local_58,0),
              iVar2 != 0)) || (uVar7 = uStack_4c, uVar8 = uStack_4c >> 0x10, uVar8 == 0)) break;
          if (((pcStack_50 == (code *)0x0) || (iVar2 = FUN_ram_4ff2bac4(), iVar2 != 0)) ||
             (0x5f4 < uVar8)) goto LAB_ram_480222da;
          if (uStack_48._2_1_ != '\0') {
            pcVar9 = pcStack_44;
            pcVar5 = pcStack_50;
            if (pcStack_50 != (code *)0x0) goto LAB_ram_4802210a;
LAB_ram_48022350:
            uVar11 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"H_SDIO_DRV","E (%lu) %s: sdio buff malloc failed\n",uVar11,
                             "H_SDIO_DRV");
            goto joined_r0x48022376;
          }
          pcVar5 = (code *)FUN_ram_4801c46c(DAT_ram_4ff6dbd0,0x600,1);
          pcVar9 = pcStack_64;
          if (pcVar5 == (code *)0x0) {
            FUN_ram_4ff2b96c(4,uVar8);
            goto LAB_ram_48022350;
          }
LAB_ram_4802210a:
          if (uStack_4c._2_2_ < 0x5f5) {
            pcVar5[2] = SUB41(uVar7 >> 0x10,0);
            pcVar5[3] = SUB41(uVar7 >> 0x18,0);
            pcVar5[4] = (code)0xc;
            pcVar5[5] = (code)0x0;
            *pcVar5 = (code)((byte)((uStack_54 >> 8 & 0xff) << 4) | (byte)(uStack_54 & 0xf));
            pcVar5[8] = uStack_48._0_1_;
            pcVar5[9] = uStack_48._1_1_;
            pcVar5[1] = uStack_4c._0_1_;
            if ((uStack_54 & 0xf) == 4) {
              if (uStack_48._2_1_ == '\0') {
                uVar7 = uVar8 - 1;
                cVar1 = *pcStack_50;
                pcVar6 = *(code **)PTR_PTR_ram_4ff47e40;
                uVar8 = uVar7 & 0xffff;
                pcVar5[2] = SUB41(uVar7,0);
                pcVar5[0xb] = cVar1;
                pcVar5[3] = SUB41(uVar8 >> 8,0);
                (*pcVar6)(pcVar5 + 0xc,pcStack_50 + 1,uVar8,uVar8 >> 8,pcVar6);
              }
            }
            else if (uStack_48._2_1_ == '\0') {
              (**(code **)PTR_PTR_ram_4ff47e40)
                        (pcVar5 + 0xc,pcStack_50,uVar8,4,0,*(code **)PTR_PTR_ram_4ff47e40);
            }
            (**(code **)(PTR_PTR_ram_4ff47e40 + 0x58))(DAT_ram_4ff6dbd8,0xffffffff);
            if (DAT_ram_4ff6dba0 == 0) {
              uStack_74 = 400;
              cVar10 = '2';
              iVar2 = 2;
              do {
                while( true ) {
                  uStack_5c = 0;
                  iVar3 = (**(code **)(PTR_PTR_ram_4ff47e40 + 200))
                                    (DAT_ram_4ff6dbcc,0x3ff55044,&uStack_5c,4,0,
                                     *(code **)(PTR_PTR_ram_4ff47e40 + 200));
                  if (iVar3 != 0) break;
                  DAT_ram_4ff6dba0 = (uStack_5c >> 0x10) - DAT_ram_4ff6dbb4 & 0xfff;
LAB_ram_480221e0:
                  if (DAT_ram_4ff6dba0 != 0) goto LAB_ram_480221e4;
                  cVar10 = cVar10 + -1;
                  (**(code **)(PTR_PTR_ram_4ff47e40 + 0x2c))(uStack_74);
                  if (uStack_74 < 30000) {
                    uStack_74 = uStack_74 + 400;
                  }
                  if (cVar10 == '\0') {
                    if (DAT_ram_4ff6dba0 != 0) {
                      DAT_ram_4ff6dba0 = DAT_ram_4ff6dba0 - 1;
                    }
                    goto LAB_ram_480223ea;
                  }
                }
                uVar11 = FUN_ram_4ff44d14();
                FUN_ram_4ff44bf0(1,"H_SDIO_DRV","E (%lu) %s: %s: err: %d\n",uVar11,"H_SDIO_DRV",
                                 "sdio_get_tx_buffer_num",iVar3);
                if (iVar3 != 0x107) goto LAB_ram_480221e0;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
              uVar11 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"H_SDIO_DRV",
                               "E (%lu) %s: %s: SDIO slave unresponsive, restart host\n",uVar11,
                               "H_SDIO_DRV","sdio_is_write_buffer_available");
              FUN_ram_4ff2b990(1,0x107);
            }
            else {
LAB_ram_480221e4:
              uVar8 = uVar8 + 0xc & 0xffff;
              DAT_ram_4ff6dba0 = DAT_ram_4ff6dba0 - 1;
              iStack_6c = 2;
              uVar11 = 0;
              while (iVar2 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0xd4))
                                       (DAT_ram_4ff6dbcc,0x1f800 - uVar8,pcVar5,
                                        uVar8 + 0x1ff & 0xfe00,0,
                                        *(code **)(PTR_PTR_ram_4ff47e40 + 0xd4)), iVar2 != 0) {
                uVar4 = FUN_ram_4ff44d14();
                FUN_ram_4ff44bf0(1,"H_SDIO_DRV",
                                 "E (%lu) %s: %s: %d: Failed to send data: %d %ld %ld\n",uVar4,
                                 "H_SDIO_DRV","sdio_write_task",uVar11,iVar2,uVar8,uVar8);
                uVar11 = 1;
                if (iStack_6c == 1) {
                  (**(code **)(PTR_PTR_ram_4ff47e40 + 0x50))(DAT_ram_4ff6dbd8);
                  uVar11 = FUN_ram_4ff44d14();
                  FUN_ram_4ff44bf0(1,"H_SDIO_DRV",
                                   "E (%lu) %s: Unrecoverable host sdio state, reset host mcu\n",
                                   uVar11,"H_SDIO_DRV");
                  FUN_ram_4ff2b990(2,iVar2,uVar8);
                  goto LAB_ram_480222b6;
                }
                iStack_6c = 1;
              }
              DAT_ram_4ff6dbb4 = DAT_ram_4ff6dbb4 + 1 & 0xfff;
            }
LAB_ram_480223ea:
            (**(code **)(PTR_PTR_ram_4ff47e40 + 0x50))(DAT_ram_4ff6dbd8);
          }
          else {
            uVar11 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"H_SDIO_DRV","E (%lu) %s: Pkt len [%u] > Max [%u]. Drop\n",uVar11,
                             "H_SDIO_DRV",uStack_4c._2_2_,0x5f4);
          }
LAB_ram_480222b6:
          if ((pcStack_44 != (code *)0x0) && (local_58 != 0)) goto LAB_ram_480222be;
          pcVar6 = pcVar9;
          if (uStack_48._2_1_ == '\0') goto joined_r0x48022324;
        }
        uVar8 = 0;
LAB_ram_480222da:
        FUN_ram_4ff2b96c(5,uVar8);
        uVar11 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"H_SDIO_DRV","E (%lu) %s: %s: Empty len\n",uVar11,"H_SDIO_DRV",
                         "sdio_write_task");
joined_r0x48022376:
      } while (pcStack_44 == (code *)0x0);
      pcVar5 = (code *)0x0;
      pcVar9 = (code *)0x0;
    } while (local_58 == 0);
LAB_ram_480222be:
    (*pcStack_44)();
    local_58 = 0;
    if ((uStack_48._2_1_ == '\0') && (pcVar6 = pcVar5, pcVar9 != (code *)0x0)) {
joined_r0x48022324:
      if (pcVar6 != (code *)0x0) {
        (*pcVar9)(pcVar5);
      }
    }
  } while( true );
}


