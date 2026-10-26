/* Firmware entry: 0x480d20e2 */

char FUN_ram_480d20e2(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  char cStack_a89;
  int local_a88 [18];
  char cStack_a40;
  byte bStack_a00;
  int local_9f8 [284];
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
  int local_560 [330];
  undefined4 uStack_38;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(local_560,0,0x530);
  uStack_38._1_1_ = 0xff;
  local_560[1] = 1;
  iVar2 = FUN_ram_4802d110(local_560);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x5b8) = 1;
    *(int *)(param_1 + 0x54c) = param_2;
    *(char **)(param_1 + 0x5c0) = "snapshot_failed";
    return '\0';
  }
  piVar7 = local_560;
  piVar3 = local_a88;
  do {
    iVar10 = piVar7[1];
    iVar2 = piVar7[2];
    iVar4 = piVar7[3];
    iVar6 = piVar7[4];
    *piVar3 = *piVar7;
    piVar3[1] = iVar10;
    piVar3[2] = iVar2;
    piVar3[3] = iVar4;
    piVar3[4] = iVar6;
    piVar7 = piVar7 + 5;
    piVar3 = piVar3 + 5;
  } while (piVar7 != &uStack_38);
  cVar8 = *(char *)(param_1 + 0x5bd);
  if (cVar8 == '\0') {
    *(char *)(param_1 + 0x5be) = cStack_a40;
    *(undefined1 *)(param_1 + 0x5bd) = 1;
    if (bStack_a00 == 0) {
LAB_ram_480d238a:
      local_9f8[0] = 0;
    }
  }
  else {
    if ((*(char *)(param_1 + 0x5be) != '\0') && (cStack_a40 == '\0')) {
      *(undefined1 *)(param_1 + 0x5be) = 0;
      if (bStack_a00 == 0) {
        local_9f8[0] = 0;
      }
      goto LAB_ram_480d21e6;
    }
    if (bStack_a00 == 0) {
      *(char *)(param_1 + 0x5be) = cStack_a40;
      goto LAB_ram_480d238a;
    }
    if (local_9f8[0] != *(int *)(param_1 + 0x554)) {
      *(char *)(param_1 + 0x5be) = cStack_a40;
      goto LAB_ram_480d21e6;
    }
    *(char *)(param_1 + 0x5be) = cStack_a40;
  }
  cVar8 = *(char *)(param_1 + 0x5bc);
LAB_ram_480d21e6:
  cVar1 = *(char *)(param_1 + 0x5b5);
  *(int *)(param_1 + 0x554) = local_9f8[0];
  *(char *)(param_1 + 0x5bc) = cVar8;
  if (cVar1 != '\0') {
    if (((*(char *)(param_1 + 0x5b7) == '\0') && (*(char *)(param_1 + 0x5b6) == '\0')) &&
       (local_a88[0] == *(int *)(param_1 + 0x544))) {
      return cVar1;
    }
    if ((param_3 != 0) ||
       (((*(char *)(param_1 + 0x5b8) == '\0' || (4999 < (uint)(param_2 - *(int *)(param_1 + 0x54c)))
         ) && ((cVar8 != '\0' ||
               ((*(char *)(param_1 + 0x5b6) != '\0' ||
                (59999 < (uint)(param_2 - *(int *)(param_1 + 0x548)))))))))) {
      iVar2 = FUN_ram_480d175e(param_1,local_a88);
      if ((iVar2 != 0) && (iVar2 = FUN_ram_480d18ce(param_1 + 4,local_a88), iVar2 != 0)) {
        FUN_ram_4ff45158(param_1 + 0x18,local_a88,0x524);
        *(undefined1 *)(param_1 + 0x5bb) = 1;
        iVar4 = FUN_ram_480b063e();
        iVar2 = DAT_ram_4ff6dcdc;
        if (iVar4 != 0) {
          FUN_ram_4ff45158(DAT_ram_4ff6dcdc + 0x22540,local_a88,0x524);
          *(undefined1 *)(iVar2 + 0x41112) = 1;
          cStack_a89 = '\0';
          iVar4 = FUN_ram_480b1222(iVar2 + 0x30,local_a88,FUN_ram_480b356e,&cStack_a89);
          if (iVar4 == 0) {
            *(undefined1 *)(iVar2 + 0x41111) = 0;
            *(char **)(iVar2 + 0x41114) = "outbox_full_or_invalid";
          }
          else if (cStack_a89 != '\0') {
            FUN_ram_480b0ed4();
          }
        }
        *(undefined1 **)(param_1 + 0x5c0) = &DAT_ram_481df390;
        *(int *)(param_1 + 0x544) = local_a88[0];
        *(undefined2 *)(param_1 + 0x5b6) = 0;
        *(undefined1 *)(param_1 + 0x5b8) = 0;
        *(undefined1 *)(param_1 + 0x5bc) = 0;
        *(int *)(param_1 + 0x548) = param_2;
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
        piVar3 = memset((void *)(param_1 + 0x564),0,0x50);
        if (*(char *)(param_1 + 0x10) != '\0') {
          *(undefined1 *)(param_1 + 0x558) = uStack_588;
          *(undefined1 *)(param_1 + 0x562) = uStack_57e;
          *(undefined1 *)(param_1 + 0x563) = uStack_57d;
          *(undefined1 *)(param_1 + 0x559) = uStack_587;
          *(undefined1 *)(param_1 + 0x55a) = uStack_586;
          *(undefined1 *)(param_1 + 0x55b) = uStack_585;
          *(undefined1 *)(param_1 + 0x55c) = uStack_584;
          *(undefined1 *)(param_1 + 0x55d) = uStack_583;
          *(undefined1 *)(param_1 + 0x55e) = uStack_582;
          *(undefined1 *)(param_1 + 0x55f) = uStack_581;
          *(undefined1 *)(param_1 + 0x560) = uStack_580;
          *(undefined1 *)(param_1 + 0x561) = uStack_57f;
          bVar5 = bStack_a00;
          if (0x14 < bStack_a00) {
            bVar5 = 0x14;
          }
          *(byte *)(param_1 + 0x5b4) = bVar5;
          if (bStack_a00 != 0) {
            piVar7 = local_9f8;
            bVar9 = 0;
            do {
              bVar9 = bVar9 + 1;
              *piVar3 = *piVar7;
              piVar7 = piVar7 + 0xe;
              piVar3 = piVar3 + 1;
            } while (bVar9 < bVar5);
          }
          *(undefined1 *)(param_1 + 0x5ba) = 1;
          return cVar1;
        }
        return cVar1;
      }
      *(int *)(param_1 + 0x54c) = param_2;
      *(char **)(param_1 + 0x5c0) = "write_failed";
      *(undefined1 *)(param_1 + 0x5b8) = 1;
    }
  }
  return '\0';
}


