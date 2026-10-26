/* Firmware entry: 0x48180ec2 */

undefined4
FUN_ram_48180ec2(undefined4 **param_1,undefined4 **param_2,undefined4 **param_3,undefined4 **param_4
                )

{
  short sVar1;
  undefined4 **ppuVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  uint uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar4 = &local_30;
  puStack_28 = &uStack_2c;
  local_30 = 0;
  uStack_2c = 0;
  uStack_24 = 0x10001;
  iVar3 = FUN_ram_4818023e(param_3,&puStack_28);
  if ((((iVar3 < 0) || (iVar3 = FUN_ram_4818023e(param_3,param_4), 0 < iVar3)) ||
      (sVar1 = *(short *)((int)param_4 + 6), sVar1 == 0)) || (uVar8 = **param_4 & 1, uVar8 == 0)) {
    return 0xfffffffc;
  }
  ppuVar2 = param_3;
  if (param_2 != (undefined4 **)0x0) {
    uStack_2c = 1;
    iVar3 = FUN_ram_4818023e(param_4,&puStack_28);
    if (iVar3 == 0) {
      return 0xfffffffc;
    }
    if (param_3 == param_4) {
      return 0xfffffffc;
    }
    ppuVar2 = param_1;
    if (param_2 == param_4) {
      return 0xfffffffc;
    }
  }
  if (ppuVar2 == param_4) {
    return 0xfffffffc;
  }
  puStack_28 = (undefined4 *)0x0;
  uStack_24 = 1;
  if (param_1 == (undefined4 **)0x0) {
    param_1 = &puStack_28;
  }
  iVar3 = FUN_ram_4817fbba(param_1,sVar1);
  if (iVar3 == 0) {
    if (param_2 == (undefined4 **)0x0) {
      iVar3 = thunk_FUN_ram_4817b126((uint)*(ushort *)((int)param_4 + 6) << 2,4);
      puVar5 = (undefined4 *)0x0;
      if (iVar3 == 0) goto LAB_ram_48180fda;
    }
    else {
      iVar3 = FUN_ram_4817fbba(param_2,(uint)*(ushort *)((int)param_4 + 6));
      if ((iVar3 != 0) ||
         (iVar3 = thunk_FUN_ram_4817b126
                            ((uint)*(ushort *)((int)param_4 + 6) << 2,
                             (param_2 != (undefined4 **)0x0) + '\x04'), iVar3 == 0))
      goto LAB_ram_48180fda;
      puVar5 = *param_2;
    }
    uVar6 = (uint)*(ushort *)((int)param_4 + 6);
    if (*param_3 != (undefined4 *)0x0) {
      uVar8 = (uint)*(ushort *)((int)param_3 + 6);
      puVar4 = *param_3;
    }
    if (uVar6 <= *(ushort *)((int)param_3 + 6)) {
      uVar8 = uVar6;
    }
    FUN_ram_481820e2(*param_1,puVar5,puVar4,uVar8,*param_4,uVar6,iVar3);
    *(undefined2 *)(param_1 + 1) = 1;
    uVar8 = (uint)*(ushort *)((int)param_1 + 6);
    uVar6 = (uint)*(ushort *)((int)param_4 + 6);
    uVar7 = 0;
    if (param_2 == (undefined4 **)0x0) {
      if (uVar8 <= uVar6) goto LAB_ram_48180fde;
      puVar4 = *param_1;
    }
    else {
      *(undefined2 *)(param_2 + 1) = 1;
      if (uVar6 < uVar8) {
        memset(*param_1 + uVar6,0,(uVar8 - uVar6) * 4);
        uVar6 = (uint)*(ushort *)((int)param_4 + 6);
      }
      uVar8 = (uint)*(ushort *)((int)param_2 + 6);
      if (uVar8 <= uVar6) goto LAB_ram_48180fde;
      puVar4 = *param_2;
    }
    memset(puVar4 + uVar6,0,(uVar8 - uVar6) * 4);
  }
  else {
LAB_ram_48180fda:
    iVar3 = 0;
    uVar7 = 0xfffffff0;
  }
LAB_ram_48180fde:
  if (puStack_28 != (undefined4 *)0x0) {
    FUN_ram_48178b14(puStack_28,(uStack_24 >> 0x10) << 2);
  }
  thunk_FUN_ram_4ff209c6(iVar3);
  return uVar7;
}


