/* Firmware entry: 0x4814d382 */

undefined4 FUN_ram_4814d382(undefined4 param_1,int param_2,int *param_3,uint param_4)

{
  short sVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 auStack_22 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = FUN_ram_4813ad9a(0,0x5ec,0x280);
  if (iVar5 == 0) {
    return 0xffffffff;
  }
  *(short *)(iVar5 + 8) = (short)param_3[2];
  *(undefined2 *)(iVar5 + 10) = 0;
  thunk_FUN_ram_4ff3c5d4();
  iVar6 = FUN_ram_4814d1e6(param_2,iVar5,0x7e,0,0);
  auStack_22[0] = 0xffff;
  if ((*(byte *)(param_2 + 0x2c) & 4) == 0) {
    if (iVar6 != 0) {
LAB_ram_4814d49c:
      iVar6 = -0xc;
      goto LAB_ram_4814d430;
    }
    iVar6 = FUN_ram_4814d1e6(param_2,iVar5,0xff,1,auStack_22);
    if (iVar6 == 0) {
      iVar6 = FUN_ram_4814d1e6(param_2,iVar5,3,1,auStack_22);
      if (((*(byte *)(param_2 + 0x2c) & 2) == 0) || (0xff < param_4)) goto LAB_ram_4814d40a;
      goto LAB_ram_4814d41c;
    }
LAB_ram_4814d4a4:
    iVar6 = -0xc;
  }
  else {
    if ((*(byte *)(param_2 + 0x2c) & 2) == 0) {
      if (iVar6 != 0) goto LAB_ram_4814d49c;
LAB_ram_4814d410:
      iVar6 = FUN_ram_4814d1e6(param_2,iVar5,param_4 >> 8,1,auStack_22);
LAB_ram_4814d41c:
      if (iVar6 != 0) goto LAB_ram_4814d4a4;
    }
    else {
      if (0xff < param_4) {
LAB_ram_4814d40a:
        if (iVar6 != 0) goto LAB_ram_4814d4a4;
        goto LAB_ram_4814d410;
      }
      if (iVar6 != 0) goto LAB_ram_4814d49c;
    }
    iVar6 = FUN_ram_4814d1e6(param_2,iVar5,param_4 & 0xff,1,auStack_22);
  }
LAB_ram_4814d430:
  do {
    sVar1 = *(short *)((int)param_3 + 10);
    puVar2 = (undefined1 *)param_3[1];
    if (sVar1 != 0) {
      puVar3 = puVar2;
      do {
        puVar4 = puVar3 + 1;
        if (iVar6 == 0) {
          iVar6 = FUN_ram_4814d1e6(param_2,iVar5,*puVar3,1,auStack_22);
        }
        puVar3 = puVar4;
      } while (puVar4 != puVar2 + (ushort)(sVar1 - 1) + 1);
    }
    param_3 = (int *)*param_3;
  } while (param_3 != (int *)0x0);
  uVar7 = FUN_ram_4814d2c2(param_2,iVar6,iVar5,auStack_22);
  return uVar7;
}


