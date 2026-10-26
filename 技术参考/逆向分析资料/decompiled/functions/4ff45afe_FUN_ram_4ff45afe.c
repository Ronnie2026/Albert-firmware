/* Firmware entry: 0x4ff45afe */

int FUN_ram_4ff45afe(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  int aiStack_44 [3];
  uint uStack_38;
  uint uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  aiStack_44[0] = param_1;
  uVar12 = (**(code **)(PTR_PTR_ram_4ff53080 + 8))(aiStack_44);
  uVar1 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if ((int)uVar12 != 0) {
    return (int)uVar12;
  }
  iVar5 = *(int *)(aiStack_44[0] + 4);
  if ((*(int *)(iVar5 + 0x18) == 0) || (*(int *)(iVar5 + 0x1c) == 0)) {
    return 0x6005;
  }
  pcVar3 = *(code **)(*(int *)(aiStack_44[0] + 8) + 8);
  if (pcVar3 != (code *)0x0) {
    uVar12 = (*pcVar3)(*(undefined4 *)(aiStack_44[0] + 0xc),param_2,param_3);
    uVar1 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 == 0x10d) {
      return 0x10d;
    }
    if ((int)uVar12 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e06();
    }
    iVar5 = *(int *)(aiStack_44[0] + 4);
    if (*(int *)(iVar5 + 0x1c) == 0) {
      uVar11 = *(uint *)(iVar5 + 0x20);
      uVar8 = 0;
      if (uVar11 == 0) {
        return 0x6003;
      }
      goto LAB_ram_4ff45b6c;
    }
  }
  uVar11 = *(uint *)(iVar5 + 0x20);
  if ((uVar11 == 0) || (uVar8 = *(uint *)(iVar5 + 0x24), uVar8 % uVar11 != 0)) {
    return 0x6003;
  }
LAB_ram_4ff45b6c:
  if ((((*(uint *)(aiStack_44[0] + 0x14) < param_2) ||
       (*(uint *)(aiStack_44[0] + 0x14) - param_2 < param_3)) || (param_2 % uVar11 != 0)) ||
     (param_3 % uVar11 != 0)) {
    return 0x102;
  }
  if (param_3 == 0) {
    return 0;
  }
  uVar9 = param_3;
  uVar10 = param_2;
  if ((*(int *)(iVar5 + 0x38) != 0) && (*(char *)(iVar5 + 0x30) != '\0')) {
    iVar5 = (**(code **)PTR_PTR_ram_4ff53080)();
    if (iVar5 != 0) {
      return iVar5;
    }
    uStack_38 = 0;
    uStack_34 = 0;
    iVar5 = (**(code **)(*(int *)(aiStack_44[0] + 4) + 0x38))(aiStack_44[0],&uStack_38);
    if ((iVar5 == 0) && (uStack_38 != 0 || uStack_34 != 0)) {
      uVar7 = (uint)*(byte *)(*(int *)(aiStack_44[0] + 4) + 0x30);
      if (uVar7 != 0) {
        puVar2 = *(uint **)(*(int *)(aiStack_44[0] + 4) + 0x34);
        uVar4 = 0;
        do {
          if ((int)(uVar4 - 0x20) < 0) {
            uVar6 = uStack_38 >> (uVar4 & 0x1f) | (uStack_34 << 1) << (0x1f - uVar4 & 0x1f);
          }
          else {
            uVar6 = uStack_34 >> (uVar4 - 0x20 & 0x1f);
          }
          if ((((uVar6 & 1) != 0) && (*puVar2 < param_2 + param_3)) &&
             (param_2 < *puVar2 + puVar2[1])) {
            iVar5 = 0x6006;
            break;
          }
          uVar4 = uVar4 + 1;
          puVar2 = puVar2 + 2;
        } while (uVar4 != uVar7);
      }
    }
    uVar12 = (**(code **)(PTR_PTR_ram_4ff53080 + 4))(aiStack_44[0],iVar5);
    uVar1 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 != 0) {
      return (int)uVar12;
    }
  }
  while( true ) {
    pcVar3 = *(code **)(*(int *)(aiStack_44[0] + 4) + 0x68);
    if (pcVar3 != (code *)0x0) {
      uVar12 = (*pcVar3)(aiStack_44[0],0);
      uVar1 = (undefined4)((ulonglong)uVar12 >> 0x20);
      if ((int)uVar12 != 0) {
        return (int)uVar12;
      }
    }
    iVar5 = (**(code **)PTR_PTR_ram_4ff53080)(aiStack_44[0],uVar1);
    if (iVar5 != 0) {
      uVar1 = 0;
      goto LAB_ram_4ff45d1c;
    }
    if (((uVar8 == 0) || (uVar9 < uVar8)) || (uVar10 % uVar8 != 0)) {
      iVar5 = (**(code **)(*(int *)(aiStack_44[0] + 4) + 0x18))(aiStack_44[0],uVar10);
      uVar7 = uVar11;
    }
    else {
      iVar5 = (**(code **)(*(int *)(aiStack_44[0] + 4) + 0x1c))(aiStack_44[0],uVar10);
      uVar7 = uVar8;
    }
    uVar9 = uVar9 - uVar7;
    if (param_3 <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("esp_flash_api.c",0x2f2,"esp_flash_erase_region","len_remain < len");
    }
    if ((iVar5 != 0) || (uVar9 == 0)) {
      uVar1 = 1;
      goto LAB_ram_4ff45d1c;
    }
    iVar5 = (**(code **)(PTR_PTR_ram_4ff53080 + 4))(aiStack_44[0]);
    if (iVar5 != 0) break;
    uVar1 = 0;
    uVar10 = uVar10 + uVar7;
  }
  uVar1 = 1;
LAB_ram_4ff45d1c:
  iVar5 = (**(code **)(PTR_PTR_ram_4ff53080 + 0xc))
                    (aiStack_44[0],iVar5,uVar1,param_2,param_3,
                     *(code **)(PTR_PTR_ram_4ff53080 + 0xc));
  return iVar5;
}


