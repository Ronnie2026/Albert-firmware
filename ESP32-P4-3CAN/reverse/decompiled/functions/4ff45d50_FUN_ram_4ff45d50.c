/* Firmware entry: 0x4ff45d50 */

int FUN_ram_4ff45d50(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *apuStack_44 [4];
  uint auStack_34 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  apuStack_44[0] = param_1;
  iVar1 = (**(code **)(PTR_PTR_ram_4ff53080 + 8))(apuStack_44);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*(int *)(apuStack_44[0][1] + 0x40) == 0) {
    return 0x6005;
  }
  if (((param_2 == 0) || ((uint)apuStack_44[0][5] < param_3)) ||
     ((uint)apuStack_44[0][5] < param_3 + param_4)) {
    return 0x102;
  }
  if (param_4 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*(int *)*apuStack_44[0] + 0x30))((int *)*apuStack_44[0],param_2);
  uVar3 = param_4;
  if (0x4000 < param_4) {
    uVar3 = 0x4000;
  }
  if ((param_2 + 0xb0100000U < 0xc0000) || (iVar1 != 0)) {
    iVar1 = 0;
  }
  else {
    auStack_34[0] = 0;
    if ((*(code **)(apuStack_44[0][2] + 0x10) == (code *)0x0) ||
       (iVar1 = (**(code **)(apuStack_44[0][2] + 0x10))(apuStack_44[0][3],uVar3,auStack_34),
       uVar3 = auStack_34[0], iVar1 == 0)) {
      return 0x101;
    }
  }
  do {
    iVar2 = (**(code **)PTR_PTR_ram_4ff53080)(apuStack_44[0]);
    if (iVar2 != 0) {
LAB_ram_4ff45e82:
      if (*(code **)(apuStack_44[0][2] + 0x14) != (code *)0x0) {
        (**(code **)(apuStack_44[0][2] + 0x14))(apuStack_44[0][3],iVar1);
      }
      return iVar2;
    }
    uVar4 = param_4;
    if (uVar3 < param_4) {
      uVar4 = uVar3;
    }
    if (iVar1 == 0) {
      iVar2 = (**(code **)(apuStack_44[0][1] + 0x40))(apuStack_44[0],param_2,param_3,uVar4);
      if (iVar2 != 0) {
LAB_ram_4ff45e76:
        (**(code **)(PTR_PTR_ram_4ff53080 + 4))(apuStack_44[0],iVar2);
        goto LAB_ram_4ff45e82;
      }
      iVar2 = (**(code **)(PTR_PTR_ram_4ff53080 + 4))(apuStack_44[0],0);
    }
    else {
      iVar2 = (**(code **)(apuStack_44[0][1] + 0x40))(apuStack_44[0],iVar1,param_3,uVar4);
      if (iVar2 != 0) goto LAB_ram_4ff45e76;
      iVar2 = (**(code **)(PTR_PTR_ram_4ff53080 + 4))(apuStack_44[0],0);
      FUN_ram_4ff45158(param_2,iVar1,uVar4);
    }
    param_3 = param_3 + uVar4;
    param_4 = param_4 - uVar4;
    param_2 = param_2 + uVar4;
    if ((iVar2 != 0) || (param_4 == 0)) goto LAB_ram_4ff45e82;
  } while( true );
}


