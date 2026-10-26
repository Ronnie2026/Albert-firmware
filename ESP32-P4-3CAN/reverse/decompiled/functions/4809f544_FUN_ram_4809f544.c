/* Firmware entry: 0x4809f544 */

void FUN_ram_4809f544(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint local_30;
  undefined4 uStack_2c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar6 = *(int *)(param_1 + 0x58);
  iVar5 = *(int *)(iVar6 + 0x5e80);
  if (*(char *)(iVar6 + 0xac2) == '\0') {
    bVar1 = false;
    if (*(short *)(iVar6 + 0xac0) == 0) {
      iVar4 = *(int *)(iVar6 + 0xab8) + 1;
      local_30 = CONCAT22((short)(local_30 >> 0x10),&instret) & 0xff00ffff;
      if (iVar4 == 0) {
        iVar4 = 1;
      }
      *(int *)(iVar6 + 0xab8) = iVar4;
      if (iVar5 == 0) {
        iVar6 = *(int *)(param_1 + 0x58);
        iVar5 = *(int *)(iVar6 + 0x5e80);
      }
      else if ((*(char *)(iVar6 + 0x7676) == '\0') || (*(char *)(iVar6 + 0x7678) != '\0')) {
        if ((*(int *)(iVar6 + 0x7688) == 0 && *(int *)(iVar6 + 0x768c) == 0) ||
           (*(char *)(iVar6 + 0x7681) == -1)) {
          if (*(short *)(iVar6 + 0x7674) == 0) {
            uVar2 = *(uint *)(iVar6 + 0x7668) + 1;
            iVar3 = (uint)(uVar2 < *(uint *)(iVar6 + 0x7668)) + *(int *)(iVar6 + 0x766c);
            if (uVar2 != 0 || iVar3 != 0) {
              uStack_2c = CONCAT22(uStack_2c._2_2_,0x10);
              *(int *)(iVar6 + 0x7660) = iVar4;
              *(int *)(iVar6 + 0x7664) = iVar5;
              *(uint *)(iVar6 + 0x7668) = uVar2;
              *(int *)(iVar6 + 0x766c) = iVar3;
              *(undefined4 *)(iVar6 + 0x7670) = 0;
              *(undefined2 *)(iVar6 + 0x7676) = 1;
              *(undefined2 *)(iVar6 + 0x7678) = 0;
              *(undefined4 *)(iVar6 + 0x765c) = uStack_2c;
              *(uint *)(iVar6 + 0x7658) = local_30;
              goto LAB_ram_4809f804;
            }
          }
          iVar6 = *(int *)(param_1 + 0x58);
          iVar5 = *(int *)(iVar6 + 0x5e80);
        }
        else {
          iVar6 = *(int *)(param_1 + 0x58);
          iVar5 = *(int *)(iVar6 + 0x5e80);
        }
      }
      else if ((((((*(uint *)(iVar6 + 0x7658) ^ local_30) & 0xffff) == 0) &&
                (*(char *)(iVar6 + 0x765a) == '\0')) && (*(short *)(iVar6 + 0x765c) == 0x10)) &&
              ((*(int *)(iVar6 + 0x7660) == iVar4 && (iVar5 == *(int *)(iVar6 + 0x7664))))) {
        uVar2 = *(uint *)(iVar6 + 0x7668);
        iVar3 = *(int *)(iVar6 + 0x766c);
LAB_ram_4809f804:
        *(undefined2 *)(iVar6 + 0xac4) = 0;
        *(undefined2 *)(iVar6 + 0xab0) = 0xf02;
        iVar4 = *(int *)(param_1 + 0x58);
        bVar1 = true;
        *(int *)(iVar6 + 0xab4) = iVar5;
        *(undefined1 *)(iVar6 + 0xaa0) = 5;
        *(undefined4 *)(iVar6 + 0xabc) = 1;
        iVar5 = *(int *)(iVar4 + 0x5e80);
        *(uint *)(iVar6 + 0xaa8) = uVar2;
        *(int *)(iVar6 + 0xaac) = iVar3;
        *(undefined1 *)(iVar6 + 0xac6) = 0;
        *(undefined2 *)(iVar6 + 0xac2) = 1;
        iVar6 = iVar4;
      }
      else {
        bVar1 = false;
        iVar5 = *(int *)(*(int *)(param_1 + 0x58) + 0x5e80);
        iVar6 = *(int *)(param_1 + 0x58);
      }
    }
  }
  else {
    bVar1 = false;
    if ((*(char *)(iVar6 + 0xab0) == '\x02') && (*(char *)(iVar6 + 0xab1) == '\x0f')) {
      bVar1 = *(int *)(iVar6 + 0xab4) == iVar5;
    }
  }
  if (*(char *)(iVar6 + 0xaea) == '\0') {
    if (*(short *)(iVar6 + 0xae8) == 0) {
      iVar4 = *(int *)(iVar6 + 0xae0) + 1;
      local_30 = CONCAT22((short)(local_30 >> 0x10),&instret) & 0xff00ffff;
      if (iVar4 == 0) {
        iVar4 = 1;
      }
      *(int *)(iVar6 + 0xae0) = iVar4;
      if (iVar5 != 0) {
        if ((*(char *)(iVar6 + 0x7796) == '\0') || (*(char *)(iVar6 + 0x7798) != '\0')) {
          if ((*(int *)(iVar6 + 0x77a8) == 0 && *(int *)(iVar6 + 0x77ac) == 0) ||
             (*(char *)(iVar6 + 0x77a1) == -1)) {
            if (*(short *)(iVar6 + 0x7794) == 0) {
              uVar2 = *(uint *)(iVar6 + 0x7788) + 1;
              iVar3 = *(int *)(iVar6 + 0x778c) + (uint)(uVar2 < *(uint *)(iVar6 + 0x7788));
              if (uVar2 != 0 || iVar3 != 0) {
                uStack_2c = CONCAT22(uStack_2c._2_2_,10);
                *(int *)(iVar6 + 0x7780) = iVar4;
                *(int *)(iVar6 + 0x7784) = iVar5;
                *(uint *)(iVar6 + 0x7788) = uVar2;
                *(int *)(iVar6 + 0x778c) = iVar3;
                *(undefined4 *)(iVar6 + 0x7790) = 0;
                *(undefined2 *)(iVar6 + 0x7796) = 1;
                *(undefined2 *)(iVar6 + 0x7798) = 0;
                *(undefined4 *)(iVar6 + 0x777c) = uStack_2c;
                *(uint *)(iVar6 + 0x7778) = local_30;
                goto LAB_ram_4809f740;
              }
            }
          }
        }
        else if ((((((*(uint *)(iVar6 + 0x7778) ^ local_30) & 0xffff) == 0) &&
                  (*(char *)(iVar6 + 0x777a) == '\0')) && (*(short *)(iVar6 + 0x777c) == 10)) &&
                ((*(int *)(iVar6 + 0x7780) == iVar4 && (iVar5 == *(int *)(iVar6 + 0x7784))))) {
          uVar2 = *(uint *)(iVar6 + 0x7788);
          iVar3 = *(int *)(iVar6 + 0x778c);
LAB_ram_4809f740:
          bVar7 = true;
          *(uint *)(iVar6 + 0xad0) = uVar2;
          *(int *)(iVar6 + 0xad4) = iVar3;
          *(int *)(iVar6 + 0xadc) = iVar5;
          *(undefined2 *)(iVar6 + 0xaec) = 0;
          *(undefined1 *)(iVar6 + 0xaee) = 0;
          *(undefined1 *)(iVar6 + 0xac8) = 6;
          *(undefined2 *)(iVar6 + 0xad8) = 0x902;
          *(undefined4 *)(iVar6 + 0xae4) = 1;
          *(undefined2 *)(iVar6 + 0xaea) = 1;
          goto LAB_ram_4809f65a;
        }
      }
    }
  }
  else if (*(char *)(iVar6 + 0xad8) == '\x02') {
    if (*(char *)(iVar6 + 0xad9) == '\t') {
      bVar7 = *(int *)(iVar6 + 0xadc) == iVar5;
      goto LAB_ram_4809f65a;
    }
  }
  bVar7 = false;
LAB_ram_4809f65a:
  FUN_ram_4ff3ec14(param_1 + 0x574,0xffffffff);
  *(bool *)(param_1 + 0x637) = bVar1;
  *(bool *)(param_1 + 0x638) = bVar7;
  FUN_ram_4ff3ee10(param_1 + 0x574);
  return;
}


