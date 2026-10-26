/* Firmware entry: 0x48064780 */

void FUN_ram_48064780(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint extraout_a1;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined4 auStack_40 [4];
  int aiStack_30 [2];
  uint uStack_28;
  byte bStack_21;
  
  iVar12 = DAT_ram_4ff5cbe8;
  iVar5 = DAT_ram_4ff5cbdc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar9 = DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8;
  iVar11 = *(int *)(iVar9 + 0x8b0);
  if (iVar11 != 0) {
    if (DAT_ram_4ff5c5c0 == '\0') {
      return;
    }
    if (DAT_ram_4ff5c5d4 != DAT_ram_4ff5c5cc) {
      return;
    }
    if (DAT_ram_4ff5c5d0 == *(int *)(iVar9 + 0x898)) {
      if (iVar11 == 3) {
        if (DAT_ram_4ff5c548 != '\x02') {
          return;
        }
        pcVar7 = "upload_aborted";
        goto LAB_ram_48064850;
      }
      if (((DAT_ram_4ff5c5cb == '\0') || (DAT_ram_4ff5c5d4 == 0)) ||
         (iVar9 = FUN_ram_48035faa(), iVar9 == 0)) {
        if (DAT_ram_4ff5c548 != '\x02') {
          return;
        }
        pcVar7 = "upload_session_changed";
        goto LAB_ram_48064850;
      }
    }
    else {
      if (iVar11 == 3) {
        return;
      }
      if (DAT_ram_4ff5c5cb == '\0') {
        return;
      }
      if (DAT_ram_4ff5c5d4 == 0) {
        return;
      }
      iVar9 = FUN_ram_48035faa();
      if (iVar9 == 0) {
        return;
      }
    }
    iVar9 = iVar12 + iVar5 * 0x1d40;
    iVar11 = *(int *)(iVar9 + 0x8b0);
    if (iVar11 == 1) {
      if (DAT_ram_4ff5c548 != '\x02') {
        return;
      }
      uVar10 = *(uint *)(iVar9 + 0x8b8);
      if (uVar10 == 0) {
        return;
      }
      if ((DAT_ram_4ff5c584 <= DAT_ram_4ff5c580) && (uVar10 <= DAT_ram_4ff5c580 - DAT_ram_4ff5c584))
      {
        DAT_ram_4ff5c584 = DAT_ram_4ff5c584 + uVar10;
        iVar12 = iVar12 + iVar5 * 0x1d40 + 0x8bc;
        if (DAT_ram_4ff5c5a4 == '\0') {
          uVar4 = 0x18 - DAT_ram_4ff5c588;
          if (uVar10 < 0x18 - DAT_ram_4ff5c588) {
            uVar4 = uVar10;
          }
          FUN_ram_4ff45158(&DAT_ram_4ff5c58c + DAT_ram_4ff5c588,iVar12,uVar4);
          DAT_ram_4ff5c588 = DAT_ram_4ff5c588 + uVar4;
          if (DAT_ram_4ff5c588 < 0x18) goto LAB_ram_48064a88;
          if ((DAT_ram_4ff5c58c != -0x17) || (DAT_ram_4ff5c598 != 0x12)) {
            pcVar7 = "image_target";
            goto LAB_ram_48064850;
          }
          DAT_ram_4ff5c5a4 = '\x01';
          uVar6 = FUN_ram_4812368c(&DAT_ram_4ff6c050,&DAT_ram_4ff5c58c);
          DAT_ram_4ff5c57c = DAT_ram_4ff5c57c + uVar6;
          if (DAT_ram_4ff5c588 == uVar6) {
            uVar10 = uVar10 - uVar4;
            if (uVar10 == 0) goto LAB_ram_48064a88;
            iVar12 = iVar12 + uVar4;
            goto LAB_ram_480649c2;
          }
        }
        else {
LAB_ram_480649c2:
          uVar4 = FUN_ram_4812368c(&DAT_ram_4ff6c050,iVar12,uVar10);
          DAT_ram_4ff5c57c = DAT_ram_4ff5c57c + uVar4;
          if (uVar4 == uVar10) {
LAB_ram_48064a88:
            DAT_ram_4ff5c5c4 = FUN_ram_48025ba6();
            return;
          }
        }
        FUN_ram_4802a8a8(auStack_40,"flash_write_");
        FUN_ram_4802a8ec(aiStack_30,auStack_40);
LAB_ram_480649f2:
        FUN_ram_4802b08e(aiStack_30,DAT_ram_4ff6c050);
        FUN_ram_4802f888();
        FUN_ram_4802a59e(aiStack_30);
        FUN_ram_4802a59e(auStack_40);
        return;
      }
    }
    else {
      if (iVar11 != 2) {
        return;
      }
      if (DAT_ram_4ff5c548 != '\x02') {
        return;
      }
      if (((DAT_ram_4ff5c5a4 != '\0') && (DAT_ram_4ff5c584 == DAT_ram_4ff5c580)) &&
         (DAT_ram_4ff5c584 == DAT_ram_4ff5c57c)) {
        DAT_ram_4ff5c5a8 = "verifying";
        iVar5 = FUN_ram_4812357a(&DAT_ram_4ff6c050,0);
        if (iVar5 != 0) {
          DAT_ram_4ff5c5a8 = "committed";
          DAT_ram_4ff5c548 = '\x03';
          goto LAB_ram_48064a88;
        }
        FUN_ram_4802a8a8(auStack_40,"image_verify_");
LAB_ram_48064af4:
        FUN_ram_4802a8ec(aiStack_30,auStack_40);
        goto LAB_ram_480649f2;
      }
    }
    pcVar7 = "upload_length";
    goto LAB_ram_48064850;
  }
  iVar5 = FUN_ram_48035faa();
  cVar1 = DAT_ram_4ff5c548;
  if (iVar5 == 0) {
    return;
  }
  if (DAT_ram_4ff5c5c0 == '\0') {
    return;
  }
  if (DAT_ram_4ff5c548 != '\x01') {
    return;
  }
  DAT_ram_4ff5c5cb = DAT_ram_4ff5c548;
  DAT_ram_4ff5c5d4 = DAT_ram_4ff5c5cc;
  DAT_ram_4ff5c5d0 = *(int *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0x898);
  iVar5 = FUN_ram_48025ba6();
  DAT_ram_4ff5c5d8 = iVar5 + 120000;
  DAT_ram_4ff5c5a8 = "headers";
  DAT_ram_4ff5c5dc = cVar1;
  FUN_ram_4802a8a8(auStack_40,"Content-Length");
  uVar13 = FUN_ram_480646fc(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0x2c);
  puVar8 = (undefined1 *)((ulonglong)uVar13 >> 0x20);
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = &DAT_ram_481df390;
  }
  FUN_ram_4802a888(aiStack_30,puVar8,(int)uVar13);
  if (DAT_ram_4ff6de60 == 0) {
    DAT_ram_4ff5c580 = 0;
  }
  else {
    uVar10 = *(uint *)(DAT_ram_4ff6de60 + 0x10);
    DAT_ram_4ff5c580 = 0;
    if ((char)bStack_21 < '\0') {
      uVar4 = bStack_21 & 0x7f;
    }
    else {
      uVar4 = uStack_28;
      if (aiStack_30[0] == 0) goto LAB_ram_48064a5c;
    }
    if ((uVar4 != 0) && (uVar10 != 0)) {
      uVar4 = 0;
      uVar6 = extraout_a1;
      uVar2 = DAT_ram_4ff5c580;
      do {
        DAT_ram_4ff5c580 = uVar2;
        uVar2 = DAT_ram_4ff5c580;
        if (-1 < (char)bStack_21) {
          uVar3 = uStack_28;
          if (aiStack_30[0] != 0) goto LAB_ram_48064948;
LAB_ram_48064a9e:
          FUN_ram_4802a59e(aiStack_30,uVar6);
          FUN_ram_4802a59e(auStack_40);
          if (uVar2 < 0x18) goto LAB_ram_48064a68;
          DAT_ram_4ff5c588 = 0;
          DAT_ram_4ff5c584 = 0;
          DAT_ram_4ff5c5a4 = '\0';
          DAT_ram_4ff5c5a8 = "begin";
          iVar5 = FUN_ram_48122bf4(&DAT_ram_4ff6c050,DAT_ram_4ff5c580,0,0xffffffff,0,0);
          if (iVar5 == 0) {
            FUN_ram_4802a8a8(auStack_40,"ota_begin_");
            goto LAB_ram_48064af4;
          }
          DAT_ram_4ff5c5a8 = "receiving";
          DAT_ram_4ff5c548 = '\x02';
          DAT_ram_4ff5c57c = 0;
          goto LAB_ram_48064a88;
        }
        uVar3 = bStack_21 & 0x7f;
LAB_ram_48064948:
        uVar6 = uVar4;
        if (uVar3 <= uVar4) goto LAB_ram_48064a9e;
        uVar13 = FUN_ram_4802b236(aiStack_30);
        uVar6 = (uint)((ulonglong)uVar13 >> 0x20);
        uVar3 = (int)uVar13 - 0x30;
        if ((9 < (uVar3 & 0xff)) || (uVar10 < uVar3)) break;
        uVar4 = uVar4 + 1;
        uVar2 = DAT_ram_4ff5c580 * 10 + uVar3;
      } while (DAT_ram_4ff5c580 <= (uVar10 - uVar3) / 10);
    }
  }
LAB_ram_48064a5c:
  FUN_ram_4802a59e(aiStack_30);
  FUN_ram_4802a59e(auStack_40);
LAB_ram_48064a68:
  pcVar7 = "image_length";
LAB_ram_48064850:
  FUN_ram_4802a8a8(aiStack_30,pcVar7);
  FUN_ram_4802f888(aiStack_30);
  FUN_ram_4802a59e(aiStack_30);
  return;
}


