/* Firmware entry: 0x4815c136 */

int FUN_ram_4815c136(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 auStack_38 [4];
  byte bStack_28;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4815dbf8(param_1 + 0x10,*(undefined4 *)(param_1 + 8),param_2,param_3);
  if (iVar1 == 0) {
    piVar2 = *(int **)(param_1 + 0x38);
    while (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      piVar2 = (int *)piVar2[1];
      if (iVar1 == 0) {
        *(int **)(param_1 + 0x38) = piVar2;
      }
      else {
        *(int **)(iVar1 + 4) = piVar2;
      }
      if (piVar2 == (int *)0x0) {
        *(int *)(param_1 + 0x3c) = iVar1;
      }
      else {
        *piVar2 = iVar1;
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      FUN_ram_4ff209c6();
      piVar2 = *(int **)(param_1 + 0x38);
    }
    memset((void *)(param_1 + 0x44),0,0x20);
    for (iVar1 = *(int *)(param_1 + 0x10); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      iStack_44 = 0;
      while (iVar3 = FUN_ram_4815af12(iVar1,0,1,0,&iStack_44,&uStack_40,0xff), iVar3 == 0) {
        puVar4 = (undefined4 *)FUN_ram_4ff20824(0x1c,2,0x1400,0x1800);
        if (puVar4 == (undefined4 *)0x0) goto LAB_ram_4815c24a;
        *puVar4 = 0;
        puVar4[1] = 0;
        FUN_ram_4ff45594(puVar4 + 2,auStack_38,0x10);
        *(undefined1 *)((int)puVar4 + 0x17) = 0;
        if (uStack_40._1_1_ != '\x01') {
          FUN_ram_4ff209c6(puVar4);
          return -1;
        }
        *(byte *)(puVar4 + 6) = bStack_28;
        iVar6 = (uint)(bStack_28 >> 5) * 4 + param_1;
        iVar3 = *(int *)(param_1 + 0x3c);
        *(uint *)(iVar6 + 0x44) = 1 << (bStack_28 & 0x1f) | *(uint *)(iVar6 + 0x44);
        uVar5 = 0;
        if (iVar3 != 0) {
          *(undefined4 **)(iVar3 + 4) = puVar4;
          uVar5 = *(undefined4 *)(param_1 + 0x3c);
        }
        puVar4[1] = 0;
        *puVar4 = uVar5;
        *(undefined4 **)(param_1 + 0x3c) = puVar4;
        if (*(int *)(param_1 + 0x38) == 0) {
          *(undefined4 **)(param_1 + 0x38) = puVar4;
        }
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        iStack_44 = iStack_44 + ((uint)uStack_40 >> 0x10 & 0xff);
      }
    }
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 1;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x80000000;
    iStack_3c = 0;
    uStack_40 = (int *)0x0;
    auStack_38[0] = 0;
    iVar1 = FUN_ram_4815bd90(param_1,&uStack_40);
    if (iVar1 != 0) {
LAB_ram_4815c24a:
      *(undefined4 *)(param_1 + 100) = 0;
      return 0x101;
    }
    FUN_ram_4815be6e(param_1,&uStack_40);
    piVar2 = uStack_40;
    FUN_ram_4815c02a(param_1,&uStack_40);
    if (piVar2 != (int *)0x0) {
LAB_ram_4815c2a4:
      piVar7 = (int *)piVar2[1];
      iVar3 = *piVar2;
      iVar1 = iStack_3c;
      while (iStack_3c = iVar3, iStack_3c != 0) {
        *(int **)(iStack_3c + 4) = piVar7;
        if (piVar7 == (int *)0x0) {
          FUN_ram_4ff209c6(piVar2);
          goto LAB_ram_4815c2a4;
        }
        *piVar7 = iStack_3c;
        iStack_3c = iVar1;
        FUN_ram_4ff209c6();
        piVar7 = (int *)piVar2[1];
        iVar1 = iStack_3c;
        iVar3 = *piVar2;
      }
      if (piVar7 != (int *)0x0) {
        *piVar7 = 0;
        iStack_3c = iVar1;
        FUN_ram_4ff209c6();
        piVar2 = piVar7;
        goto LAB_ram_4815c2a4;
      }
      iStack_3c = iVar1;
      FUN_ram_4ff209c6();
    }
    *(undefined4 *)(param_1 + 100) = 1;
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return iVar1;
}


