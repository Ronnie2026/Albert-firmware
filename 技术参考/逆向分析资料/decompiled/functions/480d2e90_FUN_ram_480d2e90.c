/* Firmware entry: 0x480d2e90 */

int FUN_ram_480d2e90(int param_1)

{
  int *__s;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  int *piVar7;
  char *pcVar8;
  char cStack_a89;
  int local_a88 [18];
  undefined1 uStack_a40;
  byte bStack_a00;
  undefined4 local_9f8 [284];
  undefined1 uStack_588;
  undefined1 uStack_587;
  undefined1 uStack_586;
  undefined1 uStack_585;
  undefined1 uStack_584;
  undefined1 uStack_583;
  undefined1 uStack_582;
  undefined1 uStack_581;
  undefined1 uStack_580;
  undefined1 uStack_57f;
  undefined1 uStack_57e;
  undefined1 uStack_57d;
  uint uStack_570;
  int iStack_56c;
  int local_560 [330];
  undefined1 local_37;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  __s = local_a88;
  memset(__s,0,0x528);
  local_a88[1] = 1;
  fence();
  DAT_ram_4ff6df84 = 1;
  if ((DAT_ram_4ff6df88 == 0) ||
     (local_560[1] = FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0x32), local_560[1] != 1)) {
    fence();
    DAT_ram_4ff6df84 = 0;
    fence();
    *(undefined1 *)(param_1 + 0x5b7) = 1;
    *(char **)(param_1 + 0x5c0) = "clear_begin_failed";
    return 0;
  }
  memset(local_560,0,0x528);
  piVar7 = local_560;
  do {
    iVar2 = piVar7[1];
    iVar3 = piVar7[2];
    iVar4 = piVar7[3];
    *__s = *piVar7;
    __s[1] = iVar2;
    __s[2] = iVar3;
    __s[3] = iVar4;
    piVar7 = piVar7 + 4;
    __s = __s + 4;
  } while (piVar7 != local_560 + 0x148);
  *__s = *piVar7;
  local_a88[0] = *DAT_ram_4ff6df8c + 1;
  FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
  memset(local_560,0,0x530);
  local_560[1] = 1;
  local_37 = 0xff;
  iVar3 = FUN_ram_4802d110(local_560);
  iVar2 = DAT_ram_4ff6df88;
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x5b7) = 1;
    *(char **)(param_1 + 0x5c0) = "clear_snapshot_failed";
    goto LAB_ram_480d304c;
  }
  if ((local_560[0x146] == 0xffffffff) && (local_560[0x147] == -1)) {
    *(undefined1 *)(param_1 + 0x5b7) = 1;
    *(char **)(param_1 + 0x5c0) = "clear_wipe_epoch_exhausted";
    goto LAB_ram_480d304c;
  }
  uStack_570 = local_560[0x146] + 1;
  iStack_56c = (uint)(uStack_570 < (uint)local_560[0x146]) + local_560[0x147];
  if (*(code **)(param_1 + 0x540) != (code *)0x0) {
    (**(code **)(param_1 + 0x540))(local_a88,1);
  }
  if (*(char *)(param_1 + 0x5b5) == '\0') {
    *(undefined1 *)(param_1 + 0x5b7) = 1;
LAB_ram_480d3030:
    if (*(char *)(param_1 + 0x13) == '\x05') {
      pcVar8 = "load_io";
    }
    else {
      pcVar8 = "load_corrupt";
    }
  }
  else {
    iVar2 = FUN_ram_480d175e(param_1,local_a88);
    if ((iVar2 != 0) && (iVar2 = FUN_ram_480d18ce(param_1 + 4,local_a88), iVar2 != 0)) {
      FUN_ram_4ff45158(param_1 + 0x18,local_a88,0x524);
      *(undefined1 *)(param_1 + 0x5bb) = 1;
      iVar4 = FUN_ram_480b063e();
      iVar3 = DAT_ram_4ff6dcdc;
      if (iVar4 != 0) {
        FUN_ram_4ff45158(DAT_ram_4ff6dcdc + 0x22540,local_a88,0x524);
        *(undefined1 *)(iVar3 + 0x41112) = 1;
        cStack_a89 = '\0';
        iVar4 = FUN_ram_480b1222(iVar3 + 0x30,local_a88,FUN_ram_480b356e,&cStack_a89);
        if (iVar4 == 0) {
          *(undefined1 *)(iVar3 + 0x41111) = 0;
          *(char **)(iVar3 + 0x41114) = "outbox_full_or_invalid";
        }
        else if (cStack_a89 != '\0') {
          FUN_ram_480b0ed4();
        }
      }
      FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0xffffffff);
      FUN_ram_480608e8(DAT_ram_4ff6df8c,local_a88);
      DAT_ram_4ff47ecc = DAT_ram_4ff47ecc + 1;
      FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
      fence();
      DAT_ram_4ff6df84 = 0;
      *(undefined2 *)(param_1 + 0x5b6) = 0;
      *(undefined1 *)(param_1 + 0x5b8) = 0;
      *(undefined4 *)(param_1 + 0x548) = 0;
      *(int *)(param_1 + 0x544) = local_a88[0];
      *(undefined1 **)(param_1 + 0x5c0) = &DAT_ram_481df390;
      *(undefined2 *)(param_1 + 0x5bc) = 0x100;
      *(undefined1 *)(param_1 + 0x5be) = uStack_a40;
      if (bStack_a00 == 0) {
        *(undefined4 *)(param_1 + 0x554) = 0;
        *(undefined1 *)(param_1 + 0x5ba) = 0;
        *(undefined1 *)(param_1 + 0x5b4) = 0;
        *(undefined1 *)(param_1 + 0x558) = 0;
        *(undefined1 *)(param_1 + 0x559) = 0;
        *(undefined1 *)(param_1 + 0x55a) = 0;
        *(undefined1 *)(param_1 + 0x55b) = 0;
        *(undefined1 *)(param_1 + 0x55c) = 0;
        *(undefined1 *)(param_1 + 0x55d) = 0;
        *(undefined1 *)(param_1 + 0x55e) = 0;
        *(undefined1 *)(param_1 + 0x55f) = 0;
        *(undefined1 *)(param_1 + 0x560) = 0;
        *(undefined1 *)(param_1 + 0x561) = 0;
        *(undefined1 *)(param_1 + 0x562) = 0;
        *(undefined1 *)(param_1 + 0x563) = 0;
        memset((void *)(param_1 + 0x564),0,0x50);
        if (*(char *)(param_1 + 0x10) == '\0') {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return iVar2;
        }
        *(undefined1 *)(param_1 + 0x5b4) = 0;
        *(undefined1 *)(param_1 + 0x558) = uStack_588;
        *(undefined1 *)(param_1 + 0x559) = uStack_587;
        *(undefined1 *)(param_1 + 0x55a) = uStack_586;
        *(undefined1 *)(param_1 + 0x55b) = uStack_585;
        *(undefined1 *)(param_1 + 0x55c) = uStack_584;
        *(undefined1 *)(param_1 + 0x55d) = uStack_583;
        *(undefined1 *)(param_1 + 0x55e) = uStack_582;
        *(undefined1 *)(param_1 + 0x55f) = uStack_581;
        *(undefined1 *)(param_1 + 0x560) = uStack_580;
        *(undefined1 *)(param_1 + 0x561) = uStack_57f;
        *(undefined1 *)(param_1 + 0x562) = uStack_57e;
        *(undefined1 *)(param_1 + 0x563) = uStack_57d;
      }
      else {
        *(undefined1 *)(param_1 + 0x5ba) = 0;
        *(undefined1 *)(param_1 + 0x5b4) = 0;
        *(undefined4 *)(param_1 + 0x554) = local_9f8[0];
        *(undefined1 *)(param_1 + 0x558) = 0;
        *(undefined1 *)(param_1 + 0x559) = 0;
        *(undefined1 *)(param_1 + 0x55a) = 0;
        *(undefined1 *)(param_1 + 0x55b) = 0;
        *(undefined1 *)(param_1 + 0x55c) = 0;
        *(undefined1 *)(param_1 + 0x55d) = 0;
        *(undefined1 *)(param_1 + 0x55e) = 0;
        *(undefined1 *)(param_1 + 0x55f) = 0;
        *(undefined1 *)(param_1 + 0x560) = 0;
        *(undefined1 *)(param_1 + 0x561) = 0;
        *(undefined1 *)(param_1 + 0x562) = 0;
        *(undefined1 *)(param_1 + 0x563) = 0;
        puVar1 = memset((void *)(param_1 + 0x564),0,0x50);
        if (*(char *)(param_1 + 0x10) == '\0') {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return iVar2;
        }
        *(undefined1 *)(param_1 + 0x561) = uStack_57f;
        *(undefined1 *)(param_1 + 0x563) = uStack_57d;
        *(undefined1 *)(param_1 + 0x558) = uStack_588;
        *(undefined1 *)(param_1 + 0x559) = uStack_587;
        *(undefined1 *)(param_1 + 0x55a) = uStack_586;
        *(undefined1 *)(param_1 + 0x55b) = uStack_585;
        *(undefined1 *)(param_1 + 0x55c) = uStack_584;
        *(undefined1 *)(param_1 + 0x55d) = uStack_583;
        *(undefined1 *)(param_1 + 0x55e) = uStack_582;
        *(undefined1 *)(param_1 + 0x55f) = uStack_581;
        *(undefined1 *)(param_1 + 0x560) = uStack_580;
        *(undefined1 *)(param_1 + 0x562) = uStack_57e;
        if (0x14 < bStack_a00) {
          bStack_a00 = 0x14;
        }
        *(byte *)(param_1 + 0x5b4) = bStack_a00;
        puVar5 = local_9f8;
        bVar6 = 0;
        do {
          bVar6 = bVar6 + 1;
          *puVar1 = *puVar5;
          puVar5 = puVar5 + 0xe;
          puVar1 = puVar1 + 1;
        } while (bVar6 < bStack_a00);
      }
      *(undefined1 *)(param_1 + 0x5ba) = 1;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar2;
    }
    *(undefined1 *)(param_1 + 0x5b7) = 1;
    if (*(char *)(param_1 + 0x5b5) == '\0') goto LAB_ram_480d3030;
    pcVar8 = "write_failed";
  }
  iVar2 = DAT_ram_4ff6df88;
  *(char **)(param_1 + 0x5c0) = pcVar8;
LAB_ram_480d304c:
  FUN_ram_4ff3b5f0(iVar2,0xffffffff);
  FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
  fence();
  DAT_ram_4ff6df84 = 0;
  return 0;
}


