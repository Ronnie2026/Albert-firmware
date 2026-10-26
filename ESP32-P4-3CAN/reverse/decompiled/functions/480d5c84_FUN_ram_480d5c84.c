/* Firmware entry: 0x480d5c84 */

undefined4
FUN_ram_480d5c84(int param_1,int param_2,undefined4 *param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 auStack_1910 [1204];
  undefined1 auStack_145c [1204];
  undefined1 auStack_fa8 [4];
  undefined4 uStack_fa4;
  char local_aa8 [12];
  char acStack_a9c [28];
  undefined4 local_a80 [330];
  undefined4 local_558 [332];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 == 0) {
    *(char **)(param_1 + 0x5c0) = "recovery_unauthorized";
    return 0xb;
  }
  iVar2 = FUN_ram_48070f54(param_2);
  if ((iVar2 == 0) || (iVar2 = FUN_ram_48070f54(param_3), iVar2 == 0)) {
    *(char **)(param_1 + 0x5c0) = "recovery_rejected";
    return 4;
  }
  pcVar10 = (char *)(param_3 + 0x140);
  pcVar9 = pcVar10;
  while (cVar1 = *pcVar9, pcVar9 = pcVar9 + 1, cVar1 == '\0') {
    if (pcVar9 == (char *)(param_3 + 0x143)) {
      *(char **)(param_1 + 0x5c0) = "recovery_rejected";
      return 5;
    }
  }
  if (*(char *)(param_1 + 0x5b5) == '\0') {
    if (*(char *)(param_1 + 0x13) == '\x05') {
      pcVar9 = "load_io";
    }
    else {
      pcVar9 = "load_corrupt";
    }
    goto LAB_ram_480d5d5a;
  }
  memset(auStack_fa8,0,0x528);
  uStack_fa4 = 1;
  if ((DAT_ram_4ff6df88 != 0) && (iVar2 = FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0x32), iVar2 == 1)) {
    fence();
    if ((DAT_ram_4ff6df84 == '\0') && (fence(), DAT_ram_4ff6df5c == 0)) {
      if (DAT_ram_4ff6df7c == 0) {
        fence();
        fence();
        if (DAT_ram_4ff6b730 != DAT_ram_4ff6b734) goto LAB_ram_480d5dd8;
        fence();
        DAT_ram_4ff6df84 = '\x01';
        DAT_ram_4ff6df64 = DAT_ram_4ff6b738;
LAB_ram_480d5e48:
        DAT_ram_4ff6df68 = FUN_ram_48025b94();
        DAT_ram_4ff6df60 = DAT_ram_4ff47ecc;
        DAT_ram_4ff47ec8 = DAT_ram_4ff47ecc + 1;
        DAT_ram_4ff47ecc = DAT_ram_4ff47ecc + 1;
        FUN_ram_4ff45158(auStack_fa8,DAT_ram_4ff6df8c,0x524);
        FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
        memset(local_a80,0,0x528);
        local_a80[1] = 1;
        iVar2 = FUN_ram_48070f54(param_2);
        if (((iVar2 == 0) || (iVar2 = FUN_ram_48070f54(auStack_fa8), iVar2 == 0)) ||
           (iVar2 = FUN_ram_48070f54(param_3), iVar2 == 0)) {
          FUN_ram_48060b84(auStack_fa8,0);
          uVar3 = 4;
          goto LAB_ram_480d5f02;
        }
        pcVar9 = (char *)(param_2 + 0x500);
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          if (cVar1 != '\0') {
            pcVar9 = local_aa8;
            goto LAB_ram_480d5f36;
          }
        } while (pcVar9 != (char *)(param_2 + 0x50c));
        goto LAB_ram_480d5ef0;
      }
LAB_ram_480d5dd8:
      FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
      iVar2 = FUN_ram_4802d2dc(1);
      if (iVar2 != 0) {
        iVar2 = FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0x32);
        if (iVar2 == 1) {
          fence();
          DAT_ram_4ff6df5c = 0;
          goto LAB_ram_480d5e48;
        }
        fence();
        DAT_ram_4ff6df5c = 0;
        fence();
        DAT_ram_4ff6df84 = '\0';
      }
    }
    else {
      FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
    }
  }
  pcVar9 = "recovery_begin_failed";
LAB_ram_480d5d5a:
  *(char **)(param_1 + 0x5c0) = pcVar9;
  return 9;
LAB_ram_480d5f44:
  do {
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    if (cVar1 != '\0') {
      puVar7 = local_558;
      puVar8 = param_3;
      do {
        uVar3 = puVar8[1];
        uVar4 = puVar8[2];
        uVar5 = puVar8[3];
        uVar6 = puVar8[4];
        *puVar7 = *puVar8;
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
        puVar7[4] = uVar6;
        puVar8 = puVar8 + 5;
        puVar7 = puVar7 + 5;
      } while (puVar8 != param_3 + 0x14a);
      local_558[0x148] = *param_3;
      memset(auStack_1910,0,0x4b3);
      memset(auStack_145c,0,0x4b3);
      iVar2 = FUN_ram_480713be(local_558,0,auStack_1910);
      if (iVar2 != 0) {
        iVar2 = FUN_ram_480713be(auStack_fa8,0,auStack_145c);
        if ((iVar2 != 0) && (iVar2 = FUN_ram_4ff4511a(auStack_1910,auStack_145c,0x4b3), iVar2 == 0))
        {
          FUN_ram_48060b84(auStack_fa8,0);
          *(undefined1 **)(param_1 + 0x5c0) = &DAT_ram_481df390;
          return 1;
        }
      }
      memset(auStack_145c,0,0x4b3);
      memset(local_558,0,0x4b3);
      iVar2 = FUN_ram_480713be(param_2,0,auStack_145c);
      if (((iVar2 != 0) && (iVar2 = FUN_ram_480713be(auStack_fa8,0,local_558), iVar2 != 0)) &&
         (iVar2 = FUN_ram_4ff4511a(auStack_145c,local_558,0x4b3), iVar2 == 0)) {
        puVar7 = local_558;
        puVar8 = param_3;
        do {
          uVar3 = puVar8[1];
          uVar4 = puVar8[2];
          uVar5 = puVar8[3];
          uVar6 = puVar8[4];
          *puVar7 = *puVar8;
          puVar7[1] = uVar3;
          puVar7[2] = uVar4;
          puVar7[3] = uVar5;
          puVar7[4] = uVar6;
          puVar8 = puVar8 + 5;
          puVar7 = puVar7 + 5;
        } while (puVar8 != param_3 + 0x14a);
        local_558[0x148] = *param_3;
        puVar8 = local_558;
        puVar7 = local_a80;
        do {
          uVar3 = puVar8[1];
          uVar4 = puVar8[2];
          uVar5 = puVar8[3];
          *puVar7 = *puVar8;
          puVar7[1] = uVar3;
          puVar7[2] = uVar4;
          puVar7[3] = uVar5;
          puVar8 = puVar8 + 4;
          puVar7 = puVar7 + 4;
        } while (puVar8 != local_558 + 0x148);
        *puVar7 = *puVar8;
        uVar3 = FUN_ram_480d55e8(param_1,auStack_fa8,local_a80,param_5);
        return uVar3;
      }
      FUN_ram_48060b84(auStack_fa8,0);
      *(char **)(param_1 + 0x5c0) = "recovery_local_ahead_retry";
      return 2;
    }
  } while (pcVar10 != (char *)(param_3 + 0x143));
  goto LAB_ram_480d5ef0;
  while (acStack_a9c != pcVar9) {
LAB_ram_480d5f36:
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    if (cVar1 != '\0') goto LAB_ram_480d5f44;
  }
LAB_ram_480d5ef0:
  FUN_ram_48060b84(auStack_fa8,0);
  uVar3 = 5;
LAB_ram_480d5f02:
  *(char **)(param_1 + 0x5c0) = "recovery_rejected";
  return uVar3;
}


