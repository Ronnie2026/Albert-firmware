/* Firmware entry: 0x4815c328 */

int FUN_ram_4815c328(int param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                    char param_6)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uStack_48;
  char cStack_44;
  char cStack_43;
  undefined2 uStack_42;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = *(int *)(param_1 + 0x30) - 1;
  if (0x7f < uVar4) {
    uVar4 = 0x7f;
  }
  iVar10 = 0x110e;
  if (param_5 <= uVar4 * 4000) {
    piVar8 = (int *)0x0;
    iVar9 = 0;
    cVar2 = '\0';
    uVar4 = param_5;
    piVar3 = (int *)0x0;
    do {
      iVar1 = *(int *)(param_1 + 0x14);
      uVar5 = FUN_ram_4815bae6(iVar1);
      if (cVar2 == '\0') {
        if (uVar5 < param_5) goto LAB_ram_4815c4be;
        while (param_5 == 0 && uVar5 == 0) {
          while( true ) {
            if ((*(int *)(iVar1 + 0xc) != -4) && (iVar10 = FUN_ram_4815baa8(iVar1), iVar10 != 0)) {
              return iVar10;
            }
            iVar10 = FUN_ram_4815db02(param_1 + 0x10);
            if (iVar10 != 0) {
              return iVar10;
            }
            uVar7 = FUN_ram_4815bae6(*(undefined4 *)(param_1 + 0x14));
            if (uVar7 == uVar5) {
              return 0x1105;
            }
            iVar1 = *(int *)(param_1 + 0x14);
            uVar5 = FUN_ram_4815bae6(iVar1);
            if (param_5 <= uVar5) break;
LAB_ram_4815c4be:
            if (399 < uVar5) goto LAB_ram_4815c394;
          }
        }
      }
      if (uVar5 == 0) {
        iVar10 = 0x1105;
        if (piVar8 == (int *)0x0) {
          return 0x1105;
        }
        goto LAB_ram_4815c52e;
      }
LAB_ram_4815c394:
      uVar7 = uVar4;
      if (uVar5 < uVar4) {
        uVar7 = uVar5;
      }
      iVar10 = FUN_ram_4815aa6c(iVar1,param_2,0x42,param_3,param_4 + iVar9,uVar7,param_6 + cVar2);
      cVar2 = cVar2 + '\x01';
      uVar4 = uVar4 - uVar7;
      if (iVar10 != 0) {
        if (iVar10 == 0x110a) goto LAB_ram_4815c55e;
LAB_ram_4815c528:
        if (piVar8 == (int *)0x0) {
          return iVar10;
        }
        goto LAB_ram_4815c52e;
      }
      piVar6 = (int *)FUN_ram_4ff20824(0xc,2,0x1400,0x1800);
      if (piVar6 == (int *)0x0) {
        iVar10 = 0x101;
        goto LAB_ram_4815c528;
      }
      piVar6[2] = iVar1;
      if (piVar3 != (int *)0x0) {
        piVar3[1] = (int)piVar6;
      }
      *piVar6 = (int)piVar3;
      piVar6[1] = 0;
      piVar3 = piVar6;
      if (piVar8 != (int *)0x0) {
        piVar3 = piVar8;
      }
      piVar8 = piVar3;
      if ((uVar4 == 0) && (0x1f < uVar5 - uVar7)) break;
      if (((*(int *)(iVar1 + 0xc) != -4) && (iVar10 = FUN_ram_4815baa8(iVar1), iVar10 != 0)) ||
         (iVar10 = FUN_ram_4815db02(param_1 + 0x10), iVar10 != 0)) goto LAB_ram_4815c528;
      iVar9 = iVar9 + uVar7;
      piVar3 = piVar6;
    } while (uVar4 != 0);
    uStack_42 = 0xffff;
    uStack_48 = param_5;
    cStack_44 = cVar2;
    cStack_43 = param_6;
    iVar10 = FUN_ram_4815aa6c(*(undefined4 *)(param_1 + 0x14),param_2,0x48,param_3,&uStack_48,8,0xff
                             );
    if (iVar10 == 0x110a) {
LAB_ram_4815c55e:
      iVar10 = 0x110a;
    }
    else {
      if (iVar10 != 0) {
LAB_ram_4815c52e:
        cVar2 = '\0';
        piVar3 = piVar8;
        do {
          FUN_ram_4815b3e2(piVar3[2],param_2,0x42,param_3,cVar2,0xff);
          piVar3 = (int *)piVar3[1];
          cVar2 = cVar2 + '\x01';
        } while (piVar3 != (int *)0x0);
      }
      while( true ) {
        piVar3 = (int *)piVar8[1];
        iVar9 = *piVar8;
        while (iVar9 != 0) {
          *(int **)(iVar9 + 4) = piVar3;
          if (piVar3 != (int *)0x0) {
            *piVar3 = iVar9;
          }
          FUN_ram_4ff209c6(piVar8);
          piVar3 = (int *)piVar8[1];
          iVar9 = *piVar8;
        }
        if (piVar3 == (int *)0x0) break;
        *piVar3 = 0;
        FUN_ram_4ff209c6();
        piVar8 = piVar3;
      }
      FUN_ram_4ff209c6();
    }
  }
  return iVar10;
}


