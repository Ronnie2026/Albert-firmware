/* Firmware entry: 0x4816bc46 */

undefined4 FUN_ram_4816bc46(int *param_1,ushort *param_2,ushort *param_3)

{
  undefined4 uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  code *pcVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((param_3 < param_2) || ((int)param_3 - (int)param_2 < 2)) ||
      (puVar2 = param_2 + 1, param_3 < puVar2)) ||
     (uVar7 = (uint)(*param_2 >> 8) | (*param_2 & 0xff) << 8,
     (uint)((int)param_3 - (int)puVar2) < uVar7)) {
LAB_ram_4816bc5c:
    FUN_ram_481714f0(param_1,0x32,0xffff8d00);
    uVar1 = 0xffff8d00;
  }
  else {
    puVar8 = (ushort *)(uVar7 + (int)puVar2);
    for (; puVar2 < puVar8; puVar2 = (ushort *)((int)puVar2 + uVar5)) {
      uVar7 = (int)puVar8 - (int)puVar2;
      if ((int)uVar7 < 3) goto LAB_ram_4816bc5c;
      uVar4 = (*(ushort *)((int)puVar2 + 1) & 0xff) << 8 | (uint)(*(ushort *)((int)puVar2 + 1) >> 8)
      ;
      uVar5 = uVar4 + 3;
      if (uVar7 < uVar5) goto LAB_ram_4816bc5c;
      if ((char)*puVar2 == '\0') {
        iVar6 = *param_1;
        iVar3 = param_1[0x10];
        pcVar9 = *(code **)(iVar6 + 0x34);
        *(char **)(iVar3 + 0x23c) = (char *)((int)puVar2 + 3);
        *(uint *)(iVar3 + 0x240) = uVar4;
        if ((pcVar9 != (code *)0x0) &&
           (iVar3 = (*pcVar9)(*(undefined4 *)(iVar6 + 0x38),param_1), iVar3 != 0)) {
          FUN_ram_481714f0(param_1,0x70,0xffff8800);
          return 0xffff8800;
        }
        break;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


