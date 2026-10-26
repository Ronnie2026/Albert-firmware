/* Firmware entry: 0x48035538 */

int FUN_ram_48035538(undefined4 *param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 uStack_66;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 4) {
    iVar4 = **(int **)*param_1;
    if (((iVar4 != 0) && (*(code **)(iVar4 + 4) != (code *)0x0)) &&
       (iVar2 = (**(code **)(iVar4 + 4))(),
       *(uint *)(iVar4 + 0xc) <= (uint)(iVar2 - *(int *)(iVar4 + 8)))) {
      return 0;
    }
    if (((*(int *)param_1[2] != 0) && (*(int *)param_1[4] != 0)) &&
       (iVar4 = FUN_ram_48032b64(), iVar4 != 0)) {
      *(short *)param_1[5] = *(short *)param_1[5] + 1;
      return 1;
    }
    if (DAT_ram_4ff6dfc8 == (code *)0x0) {
      return 0;
    }
    if (DAT_ram_4ff6dfc4 == (code *)0x0) {
      return 0;
    }
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    iVar4 = (**(code **)(*DAT_ram_4ff6dfe4 + 0x48))
                      (DAT_ram_4ff6dfe4,param_1[1],&uStack_b4,&uStack_b0,&uStack_ac,
                       *(code **)(*DAT_ram_4ff6dfe4 + 0x48));
    if (iVar4 == 0) {
      return 0;
    }
    memset(&uStack_a8,0,0x88);
    uStack_a0 = CONCAT31(uStack_a0._1_3_,8);
    uStack_7c = CONCAT31(uStack_7c._1_3_,8);
    uStack_8c._0_3_ = CONCAT12(1,(undefined2)uStack_8c);
    uStack_66 = 1;
    (*DAT_ram_4ff6dfc8)(param_1[1],DAT_ram_4ff6dfe4,uStack_b4,uStack_b0,uStack_ac,&uStack_a8,8,
                        DAT_ram_4ff6dfc8);
    (*DAT_ram_4ff6dfc4)(&uStack_a8);
    *(short *)param_1[5] = *(short *)param_1[5] + 1;
    return 1;
  }
  if (DAT_ram_4ff6dfb0 != (code *)0x0) {
    (*DAT_ram_4ff6dfb0)();
  }
  iVar4 = **(int **)*param_1;
  if (((iVar4 != 0) && (*(code **)(iVar4 + 4) != (code *)0x0)) &&
     (iVar2 = (**(code **)(iVar4 + 4))(),
     *(uint *)(iVar4 + 0xc) <= (uint)(iVar2 - *(int *)(iVar4 + 8)))) {
    return 0;
  }
  if (param_2 == 5) {
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_a4 = 8;
    uStack_90 = 0x10000;
    puVar5 = (ushort *)param_1[5];
    param_1 = (undefined4 *)*param_1;
    iVar4 = (**(code **)(*DAT_ram_4ff6dfe4 + 100))(DAT_ram_4ff6dfe4,&uStack_a8);
    if (iVar4 == 0) {
      if (0x1f < *puVar5) {
        return 0;
      }
    }
    else {
      if (DAT_ram_4ff6dfcc != (code *)0x0) {
        (*DAT_ram_4ff6dfcc)(&uStack_a8,DAT_ram_4ff6dfe4);
      }
      uVar1 = *puVar5;
      *puVar5 = uVar1 + 1;
      if (0x1f < (ushort)(uVar1 + 1)) goto LAB_ram_480355b6;
    }
    iVar2 = *(int *)*param_1;
    if (((iVar2 == 0) || (*(code **)(iVar2 + 4) == (code *)0x0)) ||
       (iVar3 = (**(code **)(iVar2 + 4))(),
       (uint)(iVar3 - *(int *)(iVar2 + 8)) < *(uint *)(iVar2 + 0xc))) {
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_a4 = 8;
      uStack_90 = 0x10000;
      iVar2 = (**(code **)(*DAT_ram_4ff6dfe4 + 0x68))(DAT_ram_4ff6dfe4,&uStack_a8);
      if (iVar2 != 0) {
        if (DAT_ram_4ff6dfcc != (code *)0x0) {
          (*DAT_ram_4ff6dfcc)(&uStack_a8,DAT_ram_4ff6dfe4);
        }
        *puVar5 = *puVar5 + 1;
        iVar4 = iVar2;
      }
    }
  }
  else {
    if (param_2 < 6) {
      if (param_2 < 2) {
        iVar4 = (**(code **)(*DAT_ram_4ff6dfe4 + 0x40))
                          (DAT_ram_4ff6dfe4,(param_2 != 0) + '\x01',param_1[1],
                           *(undefined4 *)param_1[2],(undefined4 *)param_1[2],
                           *(code **)(*DAT_ram_4ff6dfe4 + 0x40));
      }
      else {
        iVar4 = (**(code **)(*DAT_ram_4ff6dfe4 + 0x44))
                          (DAT_ram_4ff6dfe4,2,(param_2 != 2) + '\x01',param_1[1],
                           *(undefined4 *)param_1[2],*(code **)(*DAT_ram_4ff6dfe4 + 0x44));
      }
    }
    else {
      if (param_2 != 6) {
        return 0;
      }
      iVar4 = (**(code **)(*DAT_ram_4ff6dfe4 + 0x5c))
                        (DAT_ram_4ff6dfe4,param_1[1],*(undefined4 *)param_1[2]);
    }
    if (iVar4 == 0) {
      return 0;
    }
    FUN_ram_4802c5e6(param_1[3],param_1[1],1,0);
LAB_ram_480355b6:
    iVar4 = 1;
  }
  return iVar4;
}


