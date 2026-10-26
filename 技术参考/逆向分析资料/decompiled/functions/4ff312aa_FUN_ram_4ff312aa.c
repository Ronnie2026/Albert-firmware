/* Firmware entry: 0x4ff312aa */

void FUN_ram_4ff312aa(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar8 = (undefined4 *)param_3[1];
  puVar4 = (undefined4 *)*param_3;
  puVar6 = (uint *)param_3[2];
  puVar2 = (uint *)param_3[3];
  puVar11 = (undefined4 *)param_3[4];
  if ((int *)*param_1 != (int *)0x0) {
    uVar1 = puVar4[1];
    uVar10 = puVar8[3];
    uVar3 = puVar4[2];
    puVar9 = (undefined4 *)(*(int *)*param_1 + param_2 * 0x34);
    *puVar9 = *puVar4;
    puVar9[5] = uVar1;
    puVar9[0xc] = puVar9[0xc] & 0x7fffffff | uVar3 & 0x80000000;
    uVar1 = puVar8[1];
    puVar9[1] = *puVar8;
    puVar9[2] = uVar1;
    puVar9[9] = puVar9[9] & 0xfbffffff | uVar10 & 0x4000000;
    puVar9[9] = puVar9[9] & 0xf7ffffff | puVar8[3] & 0x8000000;
    puVar9[9] = puVar9[9] & 0xefffffff | puVar8[3] & 0x10000000;
    puVar9[9] = puVar9[9] & 0xdfffffff | puVar8[3] & 0x20000000;
    puVar9[9] = puVar9[9] & 0x3fffffff | puVar8[3] & 0xc0000000;
    puVar9[4] = puVar9[4] & 0xfeffffff | (*(byte *)((int)puVar6 + 3) & 1) << 0x18;
    puVar9[4] = puVar9[4] & 0xfdffffff | *puVar6 & 0x2000000;
    puVar9[4] = puVar9[4] & 0xfbffffff | *puVar6 & 0x4000000;
    puVar9[4] = puVar9[4] & 0xf7ffffff | *puVar6 & 0x8000000;
    puVar9[4] = puVar9[4] & 0xefffffff | *puVar6 & 0x10000000;
    puVar9[4] = puVar9[4] & 0xdfffffff | *puVar6 & 0x20000000;
    puVar9[6] = puVar9[6] & 0xfdffffff | *puVar2 & 0x2000000;
    puVar9[6] = puVar9[6] & 0xfe7fffff | *puVar2 & 0x1800000;
    puVar9[6] = puVar9[6] & 0xff83ffff | *puVar2 & 0x7c0000;
    puVar9[6] = puVar9[6] & 0xc3ffffff | *puVar2 & 0x3c000000;
    puVar9[6] = puVar9[6] & 0xbfffffff | *puVar2 & 0x40000000;
    puVar9[6] = puVar9[6] & 0x7fffffff | *puVar2 & 0x80000000;
    puVar9[10] = puVar9[10] & 0xfffeffff | (*(ushort *)((int)puVar2 + 6) & 1) << 0x10;
    puVar9[10] = puVar9[10] & 0xfffdffff | puVar2[1] & 0x20000;
    uVar3 = FUN_ram_4ff20626();
    iVar7 = *(int *)*param_1;
    if ((99 < uVar3) && (param_2 == 2)) {
      *(uint *)(iVar7 + 0x90) =
           (uint)((puVar2[1] >> 0x13 & 0xf) != 0) << 0x16 | *(uint *)(iVar7 + 0x90) & 0xff87ffff;
    }
    iVar5 = param_2 * 0x34 + iVar7;
    *(uint *)(iVar5 + 0x28) = *(uint *)(iVar5 + 0x28) & 0xf87fffff | puVar2[1] & 0x7800000;
    *(uint *)(iVar5 + 0x2c) = *(uint *)(iVar5 + 0x2c) & 0x3ffffff | puVar2[2] & 0xfc000000;
    uVar1 = puVar11[1];
    *(undefined4 *)(iVar5 + 0x1c) = *puVar11;
    *(undefined4 *)(iVar5 + 0x20) = uVar1;
    *(uint *)(iVar7 + 300) = *(uint *)(iVar7 + 300) & 0xfffcffff | 0x20000;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_esp_hw_support__ram_4ff54ff0 + 0x2d,0x3b,
                   s_pmu_hp_system_init_ram_4ff53b5c,s_ctx_>hal_ram_4ff54fe4);
}


