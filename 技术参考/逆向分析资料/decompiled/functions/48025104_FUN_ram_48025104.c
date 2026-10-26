/* Firmware entry: 0x48025104 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48025104(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uStack_64;
  uint uStack_60;
  ushort uStack_5c;
  undefined1 uStack_5a;
  undefined1 auStack_58 [20];
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48027528("=========== Before Setup Start ===========\n");
  FUN_ram_480038a2(&uStack_64);
  FUN_ram_48027528("Chip Info:\n");
  FUN_ram_48027528("------------------------------------------\n");
  FUN_ram_48027528("  Model             : ");
  if (uStack_64 == 0xd) {
    FUN_ram_48027528("ESP32-C6\n");
    goto LAB_ram_4802519e;
  }
  if (uStack_64 < 0xe) {
    if (uStack_64 == 5) {
      FUN_ram_48027528("ESP32-C3\n");
      goto LAB_ram_4802519e;
    }
    if (uStack_64 < 6) {
      if (uStack_64 == 1) {
        FUN_ram_48027528("ESP32\n");
        goto LAB_ram_4802519e;
      }
      if (uStack_64 == 2) {
        FUN_ram_48027528("ESP32-S2\n");
        goto LAB_ram_4802519e;
      }
    }
    else {
      if (uStack_64 == 9) {
        FUN_ram_48027528("ESP32-S3\n");
        goto LAB_ram_4802519e;
      }
      if (uStack_64 == 0xc) {
        FUN_ram_48027528(&DAT_ram_481c1ff8);
        goto LAB_ram_4802519e;
      }
    }
  }
  else {
    if (uStack_64 == 0x14) {
      FUN_ram_48027528("ESP32-C61\n");
      goto LAB_ram_4802519e;
    }
    if (uStack_64 < 0x15) {
      if (uStack_64 == 0x10) {
        FUN_ram_48027528("ESP32-H2\n");
        goto LAB_ram_4802519e;
      }
      if (uStack_64 == 0x12) {
        FUN_ram_48027528("ESP32-P4\n");
        goto LAB_ram_4802519e;
      }
    }
    else {
      if (uStack_64 == 0x17) {
        FUN_ram_48027528("ESP32-C5\n");
        goto LAB_ram_4802519e;
      }
      if (uStack_64 == 0x19) {
        FUN_ram_48027528("ESP32-H21\n");
        goto LAB_ram_4802519e;
      }
    }
  }
  FUN_ram_48027528("Unknown %d\n");
LAB_ram_4802519e:
  FUN_ram_48027528("  Package           : ");
  FUN_ram_48027528(&DAT_ram_481c207c,_DAT_ram_5012d04c >> 0x14 & 7);
  FUN_ram_48027528(&DAT_ram_481df93c);
  uVar8 = __extendsfdf2((float)uStack_5c);
  uVar8 = __divdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_ram_481f4ca8,DAT_ram_481f4cac);
  uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_ram_48027528("  Revision          : %.2f\n",uVar2,(int)uVar8,uVar2);
  FUN_ram_48027528("  Cores             : %d\n",uStack_5a);
  FUN_ram_4ff32b00(auStack_58);
  FUN_ram_48027528("  CPU Frequency     : %lu MHz\n",uStack_44);
  uVar2 = FUN_ram_4ff211de();
  FUN_ram_48027528("  XTAL Frequency    : %d MHz\n",uVar2);
  FUN_ram_48027528("  Features Bitfield : %#010x\n",uStack_60);
  if ((uStack_60 & 1) == 0) {
    puVar7 = &DAT_ram_481c1f84;
  }
  else {
    puVar7 = &DAT_ram_481c1f80;
  }
  FUN_ram_48027528("  Embedded Flash    : %s\n",puVar7);
  if ((uStack_60 & 0x80) == 0) {
    puVar7 = &DAT_ram_481c1f84;
  }
  else {
    puVar7 = &DAT_ram_481c1f80;
  }
  FUN_ram_48027528("  Embedded PSRAM    : %s\n",puVar7);
  if ((uStack_60 & 2) == 0) {
    puVar7 = &DAT_ram_481c1f84;
  }
  else {
    puVar7 = &DAT_ram_481c1f80;
  }
  FUN_ram_48027528("  2.4GHz WiFi       : %s\n",puVar7);
  if ((uStack_60 & 0x20) == 0) {
    puVar7 = &DAT_ram_481c1f84;
  }
  else {
    puVar7 = &DAT_ram_481c1f80;
  }
  FUN_ram_48027528("  Classic BT        : %s\n",puVar7);
  if ((uStack_60 & 0x10) == 0) {
    puVar7 = &DAT_ram_481c1f84;
  }
  else {
    puVar7 = &DAT_ram_481c1f80;
  }
  FUN_ram_48027528("  BT Low Energy     : %s\n",puVar7);
  if ((uStack_60 & 0x40) == 0) {
    puVar7 = &DAT_ram_481c1f84;
  }
  else {
    puVar7 = &DAT_ram_481c1f80;
  }
  FUN_ram_48027528("  IEEE 802.15.4     : %s\n",puVar7);
  FUN_ram_48027528("------------------------------------------\n");
  FUN_ram_48024fd0(0x800,"INTERNAL");
  FUN_ram_48027528("------------------------------------------\n");
  iVar3 = FUN_ram_48026baa();
  if (iVar3 != 0) {
    FUN_ram_48024fd0(0x400,"SPIRAM");
    FUN_ram_48027528("  Bus Mode          : ");
    FUN_ram_48027528("QSPI\n");
    FUN_ram_48027528("------------------------------------------\n");
  }
  FUN_ram_48027528("Flash Info:\n");
  FUN_ram_48027528("------------------------------------------\n");
  uVar1 = 1 << (*_DAT_ram_4ffbffe8 & 0x1f);
  uVar8 = __extendsfdf2((float)uVar1);
  uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_ram_481f4cb0,DAT_ram_481f4cb4);
  FUN_ram_48027528("  Chip Size         : %8lu B (%.0f MB)\n",uVar1,(int)uVar8,
                   (int)((ulonglong)uVar8 >> 0x20));
  uVar1 = *(uint *)(_DAT_ram_4ffbffe8 + 8);
  uVar8 = __extendsfdf2((float)uVar1);
  uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_ram_481f4ca0,DAT_ram_481f4ca4);
  FUN_ram_48027528("  Block Size        : %8lu B (%6.1f KB)\n",uVar1,(int)uVar8,
                   (int)((ulonglong)uVar8 >> 0x20));
  uVar1 = *(uint *)(_DAT_ram_4ffbffe8 + 0xc);
  uVar8 = __extendsfdf2((float)uVar1);
  uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_ram_481f4ca0,DAT_ram_481f4ca4);
  FUN_ram_48027528("  Sector Size       : %8lu B (%6.1f KB)\n",uVar1,(int)uVar8,
                   (int)((ulonglong)uVar8 >> 0x20));
  uVar1 = *(uint *)(_DAT_ram_4ffbffe8 + 0x10);
  uVar8 = __extendsfdf2((float)uVar1);
  uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_ram_481f4ca0,DAT_ram_481f4ca4);
  FUN_ram_48027528("  Page Size         : %8lu B (%6.1f KB)\n",uVar1,(int)uVar8,
                   (int)((ulonglong)uVar8 >> 0x20));
  uVar2 = FUN_ram_480297c6(&DAT_ram_4ff6dc18);
  uVar4 = FUN_ram_48029748(&DAT_ram_4ff6dc18);
  uVar5 = FUN_ram_480297aa(&DAT_ram_4ff6dc18);
  FUN_ram_48027528("  Bus Speed         : %lu MHz\n",uVar2);
  FUN_ram_48027528("  Flash Frequency   : %lu MHz (source: %u MHz, divider: %u)\n",uVar2,uVar4,uVar5
                  );
  FUN_ram_48027528("  Bus Mode          : ");
  FUN_ram_48027528("DIO\n");
  FUN_ram_48027528("------------------------------------------\n");
  FUN_ram_48027528("Partitions Info:\n");
  FUN_ram_48027528("------------------------------------------\n");
  iVar3 = FUN_ram_4812e16a(0xff,0xff,0);
  uVar4 = DAT_ram_481f4ca4;
  uVar2 = DAT_ram_481f4ca0;
  do {
    if (iVar3 == 0) {
      FUN_ram_48027528("------------------------------------------\n");
      FUN_ram_48027528("Software Info:\n");
      FUN_ram_48027528("------------------------------------------\n");
      FUN_ram_48027528("  Compile Date/Time : %s %s\n","Oct  8 2026","19:09:14");
      uVar2 = FUN_ram_481a7056();
      FUN_ram_48027528("  ESP-IDF Version   : %s\n",uVar2);
      FUN_ram_48027528("  Arduino Version   : %s\n","3.3.7");
      FUN_ram_48027528("------------------------------------------\n");
      FUN_ram_48027528("Board Info:\n");
      FUN_ram_48027528("------------------------------------------\n");
      FUN_ram_48027528("  Arduino Board     : %s\n","ESP32P4_DEV");
      FUN_ram_48027528("  Arduino Variant   : %s\n","esp32p4");
      FUN_ram_48027528("  Arduino Runs Core : %d\n",0);
      FUN_ram_48027528("  Arduino Events on : %d\n",0);
      FUN_ram_48027528("  CDC On Boot       : %d\n",0);
      FUN_ram_48027528("============ Before Setup End ============\n");
      thunk_FUN_ram_4ff3c2b6(100);
      return;
    }
    iVar6 = FUN_ram_4812e20a(iVar3);
    if (iVar6 != 0) {
      uVar8 = __extendsfdf2((float)*(uint *)(iVar6 + 0x10));
      __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar2,uVar4);
      FUN_ram_48027528("  %17s : addr: 0x%08X, size: %7.1f KB",iVar6 + 0x18,
                       *(undefined4 *)(iVar6 + 0xc));
      if (*(int *)(iVar6 + 4) == 0) {
        FUN_ram_48027528(", type:  APP");
        iVar6 = *(int *)(iVar6 + 8);
        if (iVar6 == 0) {
          FUN_ram_48027528(", subtype: FACTORY");
        }
        else if (iVar6 - 0x10U < 0x10) {
          FUN_ram_48027528(", subtype: OTA_%lu",iVar6 - 0x10U);
        }
        else if (iVar6 == 0x20) {
          FUN_ram_48027528(", subtype: TEST");
        }
        else {
          FUN_ram_48027528(", subtype: 0x%02X");
        }
      }
      else {
        FUN_ram_48027528(", type: DATA");
        FUN_ram_48027528(", subtype: ");
        uVar1 = *(uint *)(iVar6 + 8);
        if (uVar1 == 5) {
          FUN_ram_48027528("EFUSE_EM");
        }
        else if (uVar1 < 6) {
          if (uVar1 == 2) {
            FUN_ram_48027528(&DAT_ram_481c23c4);
          }
          else if (uVar1 < 3) {
            if (uVar1 == 0) {
              FUN_ram_48027528(&DAT_ram_481c23bc);
            }
            else {
              FUN_ram_48027528(&DAT_ram_481c23c0);
            }
          }
          else if (uVar1 == 3) {
            FUN_ram_48027528("COREDUMP");
          }
          else {
            FUN_ram_48027528("NVS_KEYS");
          }
        }
        else if (uVar1 == 0x81) {
          FUN_ram_48027528(&DAT_ram_481c2404);
        }
        else if (uVar1 < 0x82) {
          if (uVar1 == 6) {
            FUN_ram_48027528("UNDEFINED");
          }
          else if (uVar1 == 0x80) {
            FUN_ram_48027528("ESPHTTPD");
          }
          else {
LAB_ram_480257b8:
            FUN_ram_48027528("0x%02X");
          }
        }
        else if (uVar1 == 0x82) {
          FUN_ram_48027528("SPIFFS");
        }
        else {
          if (uVar1 != 0x83) goto LAB_ram_480257b8;
          FUN_ram_48027528("LITTLEFS");
        }
      }
      FUN_ram_48027528(&DAT_ram_481df93c);
    }
    iVar3 = FUN_ram_4812e094(iVar3);
  } while( true );
}


