/* Firmware entry: 0x480af836 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_480af836(void)

{
  bool bVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  code **ppcVar10;
  uint uVar11;
  code *pcVar12;
  undefined8 uVar13;
  char *local_70;
  int iStack_5c;
  int iStack_58;
  code *local_54;
  char *pcStack_50;
  code *pcStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dd58 == (char *)0x0) {
    pcVar9 = (char *)FUN_ram_4ff206d8(0xa66,0x404);
    if (pcVar9 == (char *)0x0) {
      PTR_s_not_started_ram_481d1918_ram_4ff47e74 = s_workspace_memory_ram_481cc7c8;
      return;
    }
    memset(pcVar9,0,0xa66);
    DAT_ram_4ff6dd58 = pcVar9;
  }
  if (DAT_ram_4ff6dd68 == '\0') {
    pcVar12 = (code *)FUN_ram_4812e1d6(1,0x82,"spiffs");
    if ((((pcVar12 == (code *)0x0) || (*(int *)(pcVar12 + 0xc) != 0x1910000)) ||
        (*(int *)(pcVar12 + 0x10) != 0x6c0000)) || (pcVar12[0x29] != (code)0x0)) {
      PTR_s_not_started_ram_481d1918_ram_4ff47e74 = s_partition_geometry_ram_481cc7e4;
      return;
    }
    PTR_s_not_started_ram_481d1918_ram_4ff47e74 = s_region_ownership_ram_481cc7f8;
    local_54 = pcVar12;
    iVar7 = FUN_ram_480af6b6(&local_54,DAT_ram_4ff6dd58);
    if (iVar7 == 0) {
      return;
    }
    DAT_ram_4ff5c504 = *(undefined4 *)pcVar12;
    DAT_ram_4ff5c508 = *(undefined4 *)(pcVar12 + 4);
    DAT_ram_4ff5c518 = *(undefined4 *)(pcVar12 + 0x14);
    DAT_ram_4ff5c520 = 0x617461;
    DAT_ram_4ff5c510 = *(int *)(pcVar12 + 0xc) + 0x1000;
    DAT_ram_4ff5c514 = 0x10000;
    DAT_ram_4ff5c51c = 0x645f3470;
    DAT_ram_4ff5c50c = 2;
    DAT_ram_4ff5c524 = 0;
    DAT_ram_4ff5c528 = 0;
    _DAT_ram_4ff5c52c = *(uint *)(pcVar12 + 0x28) & 0xffffff00;
    PTR_s_not_started_ram_481d1918_ram_4ff47e74 = s_partition_init_ram_481cc80c;
    pcStack_4c = FUN_ram_48025b94;
    uStack_48 = 0;
    uStack_44 = 0;
    FUN_ram_4807df16(&pcStack_4c);
    DAT_ram_4ff6dd64 = FUN_ram_48159ea8(&DAT_ram_4ff5c504);
    FUN_ram_4807e2fa(&pcStack_4c);
    if (DAT_ram_4ff6dd64 != 0) {
      return;
    }
    DAT_ram_4ff6dd68 = '\x01';
  }
  pcVar9 = DAT_ram_4ff6dd58;
  pcStack_50 = "slot1";
  iStack_5c = 0;
  local_54 = (code *)0x481cb964;
  DAT_ram_4ff6dd64 = FUN_ram_48159fd2("p4_data","fsd_records3",0,&pcStack_4c);
  if (DAT_ram_4ff6dd64 == 0x1102) {
LAB_ram_480afdd0:
    iStack_5c = 0;
    DAT_ram_4ff6dd64 = 0;
    local_70 = "nvs";
    iVar7 = 0;
LAB_ram_480afde2:
    ppcVar10 = &local_54;
    bVar3 = 0;
    bVar1 = false;
    do {
      pcVar12 = *ppcVar10;
      DAT_ram_4ff6dd64 = FUN_ram_48159fd2(local_70,"fsd_records3",0,&pcStack_4c);
      if (DAT_ram_4ff6dd64 == 0x1102) {
LAB_ram_480afefa:
        iStack_5c = 0;
        DAT_ram_4ff6dd64 = 0;
        if (iVar7 != 1) {
          DAT_ram_4ff6dd64 = FUN_ram_48159fd2("p4_data","fsd_records3",0,&iStack_58);
          if (DAT_ram_4ff6dd64 == 0x1102) {
            DAT_ram_4ff6dd64 = 0;
LAB_ram_480b0056:
            DAT_ram_4ff6dd64 = FUN_ram_48159fd2("p4_data","fsd_records3",0,&pcStack_4c);
            if (DAT_ram_4ff6dd64 == 0x1102) {
LAB_ram_480b009c:
              iStack_5c = 0;
              DAT_ram_4ff6dd64 = 0;
              goto LAB_ram_480afed8;
            }
            if (DAT_ram_4ff6dd64 == 0) {
              iStack_5c = 0x4b3;
              DAT_ram_4ff6dd64 = FUN_ram_4815a556(pcStack_4c,pcVar12,pcVar9 + 0x4b3,&iStack_5c);
              FUN_ram_4815a050(pcStack_4c);
              if (DAT_ram_4ff6dd64 == 0x1102) goto LAB_ram_480b009c;
            }
          }
          else if (DAT_ram_4ff6dd64 == 0) {
            FUN_ram_4815a050(iStack_58);
            DAT_ram_4ff6dd64 = FUN_ram_48159fd2("p4_data","fsd_records3",1,&iStack_58);
            if (DAT_ram_4ff6dd64 == 0) {
              pcStack_4c = FUN_ram_48025b94;
              uStack_48 = 0;
              uStack_44 = 0;
              FUN_ram_4807df16(&pcStack_4c);
              DAT_ram_4ff6dd64 = FUN_ram_4815a0b6(iStack_58,pcVar12);
              if (DAT_ram_4ff6dd64 == 0x1102) {
                DAT_ram_4ff6dd64 = 0;
LAB_ram_480b012e:
                DAT_ram_4ff6dd64 = FUN_ram_4815a1c4(iStack_58);
              }
              else if (DAT_ram_4ff6dd64 == 0) goto LAB_ram_480b012e;
              FUN_ram_4815a050(iStack_58);
              iVar8 = DAT_ram_4ff6dd64;
              FUN_ram_4807e2fa(&pcStack_4c);
              if (iVar8 == 0) goto LAB_ram_480b0056;
            }
          }
          pcVar9 = "partial_remove";
          bVar3 = 0;
          DAT_ram_4ff6dd60 = DAT_ram_4ff6dd64;
          goto LAB_ram_480af8fa;
        }
      }
      else {
        if (DAT_ram_4ff6dd64 != 0) {
LAB_ram_480b013a:
          pcVar9 = "blob_read";
          bVar3 = 0;
          DAT_ram_4ff6dd60 = DAT_ram_4ff6dd64;
          goto LAB_ram_480af8fa;
        }
        iStack_5c = 0x4b3;
        DAT_ram_4ff6dd64 = FUN_ram_4815a556(pcStack_4c,pcVar12,pcVar9,&iStack_5c);
        FUN_ram_4815a050(pcStack_4c);
        iVar8 = iStack_5c;
        if (DAT_ram_4ff6dd64 == 0x1102) goto LAB_ram_480afefa;
        if (DAT_ram_4ff6dd64 != 0) goto LAB_ram_480b013a;
        bVar4 = FUN_ram_480726d6(pcVar9);
        if (iVar7 != 1) {
          iVar8 = FUN_ram_480357d6("fsd_records3",pcVar12,pcVar9,iVar8);
          if (iVar8 == 0) {
            pcVar9 = "blob_write";
            iVar8 = DAT_ram_4ff6dd64;
          }
          else {
            iStack_58 = 0;
            DAT_ram_4ff6dd64 = FUN_ram_48159fd2("p4_data","fsd_records3",0,&pcStack_4c);
            if (DAT_ram_4ff6dd64 == 0x1102) {
LAB_ram_480b00c2:
              DAT_ram_4ff6dd64 = 0;
              iVar8 = iVar7;
            }
            else {
              iVar8 = DAT_ram_4ff6dd64;
              if (DAT_ram_4ff6dd64 == 0) {
                iStack_58 = 0x4b3;
                DAT_ram_4ff6dd64 = FUN_ram_4815a556(pcStack_4c,pcVar12,pcVar9 + 0x4b3,&iStack_58);
                FUN_ram_4815a050(pcStack_4c);
                if (DAT_ram_4ff6dd64 == 0x1102) goto LAB_ram_480b00c2;
                iVar8 = DAT_ram_4ff6dd64;
                if (((DAT_ram_4ff6dd64 == 0) && (iVar8 = iVar7, iStack_58 == iStack_5c)) &&
                   (iVar6 = FUN_ram_4ff4511a(pcVar9,pcVar9 + 0x4b3), iVar6 == 0))
                goto LAB_ram_480afec8;
              }
            }
            pcVar9 = "blob_verify";
          }
          goto LAB_ram_480af8f8;
        }
LAB_ram_480afec8:
        bVar3 = bVar4 | bVar3;
        bVar1 = true;
      }
LAB_ram_480afed8:
      ppcVar10 = ppcVar10 + 1;
    } while (&pcStack_4c != ppcVar10);
    if ((bVar1) && (bVar3 == 0)) {
      pcVar9 = "blob_corrupt";
      bVar3 = 0;
      DAT_ram_4ff6dd60 = DAT_ram_4ff6dd64;
    }
    else if (iVar7 == 1) {
LAB_ram_480b01a2:
      pcVar9 = "";
      bVar3 = 1;
      DAT_ram_4ff6dd60 = DAT_ram_4ff6dd64;
    }
    else {
      pcStack_4c = (code *)CONCAT31(pcStack_4c._1_3_,1);
      iVar7 = FUN_ram_480357d6("fsd_records3","_ready",&pcStack_4c,1);
      if (iVar7 == 0) {
        pcVar9 = "marker_write";
      }
      else {
        iVar7 = FUN_ram_48030cb4(1,"fsd_records3","_ready",pcVar9 + 0x4b3,0x4b3,&iStack_5c);
        if (((iVar7 == 1) && (iStack_5c == 1)) && (pcVar9[0x4b3] == '\x01')) goto LAB_ram_480b01a2;
        pcVar9 = "marker_verify";
      }
      bVar3 = 0;
      DAT_ram_4ff6dd60 = DAT_ram_4ff6dd64;
    }
  }
  else {
    if (DAT_ram_4ff6dd64 == 0) {
      iStack_5c = 0x4b3;
      DAT_ram_4ff6dd64 = FUN_ram_4815a556(pcStack_4c,"_ready",pcVar9,&iStack_5c);
      FUN_ram_4815a050(pcStack_4c);
      if (DAT_ram_4ff6dd64 == 0x1102) goto LAB_ram_480afdd0;
      if (DAT_ram_4ff6dd64 != 0) goto LAB_ram_480afb86;
      if ((iStack_5c != 1) || (*pcVar9 != '\x01')) {
        pcVar9 = "marker_invalid";
        iVar8 = DAT_ram_4ff6dd64;
LAB_ram_480af8f8:
        bVar3 = 0;
        DAT_ram_4ff6dd60 = iVar8;
        goto LAB_ram_480af8fa;
      }
      local_70 = "p4_data";
      iVar7 = 1;
      goto LAB_ram_480afde2;
    }
LAB_ram_480afb86:
    pcVar9 = "marker_read";
    bVar3 = 0;
    DAT_ram_4ff6dd60 = DAT_ram_4ff6dd64;
  }
LAB_ram_480af8fa:
  pcVar2 = DAT_ram_4ff6dd58;
  iStack_5c = 0;
  _DAT_ram_4ff47e6c = (ushort)bVar3;
  PTR_DAT_ram_481df390_ram_4ff47e70 = pcVar9;
  DAT_ram_4ff6dd64 = FUN_ram_48159fd2("p4_data","p4_cloud",0,&pcStack_4c);
  if (DAT_ram_4ff6dd64 == 0x1102) {
LAB_ram_480afb92:
    iStack_5c = 0;
    DAT_ram_4ff6dd64 = 0;
    DAT_ram_4ff6dd64 = FUN_ram_48159fd2(&DAT_ram_481c3efc,"p4_cloud",0,&pcStack_4c);
    iVar7 = 0;
    if (DAT_ram_4ff6dd64 == 0x1102) {
LAB_ram_480afca6:
      iStack_5c = 0;
      DAT_ram_4ff6dd64 = 0;
      DAT_ram_4ff6dd64 = FUN_ram_48159fd2("p4_data","p4_cloud",0,&iStack_58);
      if (DAT_ram_4ff6dd64 == 0x1102) {
        DAT_ram_4ff6dd64 = 0;
LAB_ram_480aff8e:
        DAT_ram_4ff6dd64 = FUN_ram_48159fd2("p4_data","p4_cloud",0,&pcStack_4c);
        if (DAT_ram_4ff6dd64 == 0x1102) {
LAB_ram_480affe0:
          iStack_5c = 0;
          DAT_ram_4ff6dd64 = 0;
LAB_ram_480affe6:
          pcStack_4c = (code *)CONCAT31(pcStack_4c._1_3_,1);
          iVar7 = FUN_ram_480357d6("p4_cloud","_ready",&pcStack_4c,1);
          if (iVar7 == 0) {
            pcVar9 = "marker_write";
          }
          else {
            iVar7 = FUN_ram_48030cb4(1,"p4_cloud","_ready",pcVar2 + 0x4b3,0x4b3,&iStack_5c);
            if (((iVar7 == 1) && (iStack_5c == 1)) &&
               (DAT_ram_4ff6dd5c = DAT_ram_4ff6dd64, pcVar2[0x4b3] == '\x01'))
            goto LAB_ram_480afdaa;
            pcVar9 = "marker_verify";
          }
          bVar3 = 0;
          DAT_ram_4ff6dd5c = DAT_ram_4ff6dd64;
          goto LAB_ram_480af982;
        }
        if (DAT_ram_4ff6dd64 == 0) {
          iStack_5c = 0x4b3;
          DAT_ram_4ff6dd64 = FUN_ram_4815a556(pcStack_4c,"config1",pcVar2 + 0x4b3,&iStack_5c);
          FUN_ram_4815a050(pcStack_4c);
          if (DAT_ram_4ff6dd64 == 0x1102) goto LAB_ram_480affe0;
        }
      }
      else if (DAT_ram_4ff6dd64 == 0) {
        FUN_ram_4815a050(iStack_58);
        DAT_ram_4ff6dd64 = FUN_ram_48159fd2("p4_data","p4_cloud",1,&iStack_58);
        if (DAT_ram_4ff6dd64 == 0) {
          pcStack_4c = FUN_ram_48025b94;
          uStack_48 = 0;
          uStack_44 = 0;
          FUN_ram_4807df16(&pcStack_4c);
          DAT_ram_4ff6dd64 = FUN_ram_4815a0b6(iStack_58,"config1");
          if (DAT_ram_4ff6dd64 == 0x1102) {
            DAT_ram_4ff6dd64 = 0;
LAB_ram_480b011e:
            DAT_ram_4ff6dd64 = FUN_ram_4815a1c4(iStack_58);
          }
          else if (DAT_ram_4ff6dd64 == 0) goto LAB_ram_480b011e;
          FUN_ram_4815a050(iStack_58);
          iVar7 = DAT_ram_4ff6dd64;
          FUN_ram_4807e2fa(&pcStack_4c);
          if (iVar7 == 0) goto LAB_ram_480aff8e;
        }
      }
      pcVar9 = "partial_remove";
      bVar3 = 0;
      DAT_ram_4ff6dd5c = DAT_ram_4ff6dd64;
    }
    else {
LAB_ram_480afbbe:
      if (DAT_ram_4ff6dd64 != 0) {
LAB_ram_480b0148:
        pcVar9 = "blob_read";
        bVar3 = 0;
        DAT_ram_4ff6dd5c = DAT_ram_4ff6dd64;
        goto LAB_ram_480af982;
      }
      iStack_5c = 0x4b3;
      DAT_ram_4ff6dd64 = FUN_ram_4815a556(pcStack_4c,"config1",pcVar2,&iStack_5c);
      FUN_ram_4815a050(pcStack_4c);
      iVar6 = iStack_5c;
      iVar8 = DAT_ram_4ff6dd64;
      if (DAT_ram_4ff6dd64 != 0x1102) {
        if (DAT_ram_4ff6dd64 != 0) goto LAB_ram_480b0148;
        iVar5 = FUN_ram_48074466(pcVar2);
        if (iVar7 == 1) {
          if (iVar5 == 0) {
LAB_ram_480afdb8:
            pcVar9 = "blob_corrupt";
            bVar3 = 0;
            DAT_ram_4ff6dd5c = iVar8;
            goto LAB_ram_480af982;
          }
          goto LAB_ram_480afda8;
        }
        iVar6 = FUN_ram_480357d6("p4_cloud","config1",pcVar2,iVar6);
        if (iVar6 == 0) {
          pcVar9 = "blob_write";
          iVar6 = DAT_ram_4ff6dd64;
          goto LAB_ram_480af980;
        }
        iStack_58 = 0;
        iVar6 = FUN_ram_48159fd2("p4_data","p4_cloud",0,&pcStack_4c);
        if (iVar6 == 0x1102) {
LAB_ram_480b010c:
          DAT_ram_4ff6dd64 = 0;
          iVar6 = iVar7;
LAB_ram_480b00a6:
          pcVar9 = "blob_verify";
          goto LAB_ram_480af980;
        }
        DAT_ram_4ff6dd64 = iVar6;
        if (iVar6 != 0) goto LAB_ram_480b00a6;
        iStack_58 = 0x4b3;
        DAT_ram_4ff6dd64 = FUN_ram_4815a556(pcStack_4c,"config1",pcVar2 + 0x4b3,&iStack_58);
        FUN_ram_4815a050(pcStack_4c);
        iVar6 = DAT_ram_4ff6dd64;
        if (DAT_ram_4ff6dd64 == 0x1102) goto LAB_ram_480b010c;
        if (((DAT_ram_4ff6dd64 != 0) || (iStack_58 != iStack_5c)) ||
           (iVar7 = FUN_ram_4ff4511a(pcVar2,pcVar2 + 0x4b3), iVar7 != 0)) goto LAB_ram_480b00a6;
        if (iVar5 == 0) goto LAB_ram_480afdb8;
        goto LAB_ram_480affe6;
      }
      iStack_5c = 0;
      DAT_ram_4ff6dd64 = 0;
      if (iVar7 != 1) goto LAB_ram_480afca6;
LAB_ram_480afda8:
      DAT_ram_4ff6dd5c = 0;
LAB_ram_480afdaa:
      pcVar9 = "";
      bVar3 = 1;
    }
  }
  else if (DAT_ram_4ff6dd64 == 0) {
    iStack_5c = 0x4b3;
    DAT_ram_4ff6dd64 = FUN_ram_4815a556(pcStack_4c,"_ready",pcVar2,&iStack_5c);
    FUN_ram_4815a050(pcStack_4c);
    if (DAT_ram_4ff6dd64 == 0x1102) goto LAB_ram_480afb92;
    if (DAT_ram_4ff6dd64 != 0) goto LAB_ram_480afdc4;
    if ((iStack_5c == 1) && (*pcVar2 == '\x01')) {
      DAT_ram_4ff6dd64 = FUN_ram_48159fd2("p4_data","p4_cloud",0,&pcStack_4c);
      if (DAT_ram_4ff6dd64 != 0x1102) {
        iVar7 = 1;
        goto LAB_ram_480afbbe;
      }
      DAT_ram_4ff6dd64 = 0;
      goto LAB_ram_480afda8;
    }
    pcVar9 = "marker_invalid";
    iVar6 = DAT_ram_4ff6dd64;
LAB_ram_480af980:
    bVar3 = 0;
    DAT_ram_4ff6dd5c = iVar6;
  }
  else {
LAB_ram_480afdc4:
    pcVar9 = "marker_read";
    bVar3 = 0;
    DAT_ram_4ff6dd5c = DAT_ram_4ff6dd64;
  }
LAB_ram_480af982:
  pcVar2 = DAT_ram_4ff6dd58;
  _DAT_ram_4ff47e64 = (ushort)bVar3;
  uVar13 = CONCAT44(pcVar9,_DAT_ram_4ff47e64);
  uVar11 = 0;
  if ((_DAT_ram_4ff47e6c & 0xff) == 0) {
LAB_ram_480afd52:
    pcVar9 = DAT_ram_4ff6dd58;
    PTR_DAT_ram_481df390_ram_4ff47e68 = (undefined *)((ulonglong)uVar13 >> 0x20);
    _DAT_ram_4ff47e64 = (undefined4)uVar13;
    memset(DAT_ram_4ff6dd58,0,0x4b3);
    memset(pcVar9 + 0x4b3,0,0x4b3);
    memset(pcVar9 + 0x966,0,0x100);
    if (uVar11 == 0) goto LAB_ram_480afd92;
  }
  else {
    PTR_DAT_ram_481df390_ram_4ff47e68 = pcVar9;
    if (bVar3 != 0) {
      uVar13 = FUN_ram_480363c4("fsd_records3",&local_54,2,_DAT_ram_4ff47e6c,
                                PTR_DAT_ram_481df390_ram_4ff47e70);
      PTR_DAT_ram_481df390_ram_4ff47e70 = (undefined *)((ulonglong)uVar13 >> 0x20);
      _DAT_ram_4ff47e6c = (uint)uVar13;
      pcStack_4c = (code *)0x481c862c;
      DAT_ram_4ff6dd60 = DAT_ram_4ff6dd64;
      uVar13 = FUN_ram_480363c4("p4_cloud",&pcStack_4c,1,_DAT_ram_4ff47e64,
                                PTR_DAT_ram_481df390_ram_4ff47e68);
      uVar11 = _DAT_ram_4ff47e6c & 0xff;
      DAT_ram_4ff6dd5c = DAT_ram_4ff6dd64;
      goto LAB_ram_480afd52;
    }
    memset(DAT_ram_4ff6dd58,0,0x4b3);
    memset(pcVar2 + 0x4b3,0,0x4b3);
    memset(pcVar2 + 0x966,0,0x100);
  }
  if (DAT_ram_4ff47e64 != '\0') {
    PTR_s_not_started_ram_481d1918_ram_4ff47e74 = "ready";
    return;
  }
LAB_ram_480afd92:
  PTR_s_not_started_ram_481d1918_ram_4ff47e74 = "migration_failed";
  return;
}


