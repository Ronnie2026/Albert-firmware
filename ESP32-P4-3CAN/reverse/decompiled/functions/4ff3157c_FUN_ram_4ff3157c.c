/* Firmware entry: 0x4ff3157c */

void FUN_ram_4ff3157c(undefined4 *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar3 = (uint *)param_3[1];
  puVar1 = (undefined4 *)*param_3;
  if ((int *)*param_1 != (int *)0x0) {
    iVar4 = *(int *)*param_1;
    uVar2 = puVar1[1];
    iVar5 = param_2 * 0x18 + iVar4;
    *(undefined4 *)(iVar5 + 0xa8) = *puVar1;
    *(undefined4 *)(iVar5 + 0xac) = uVar2;
    *(uint *)(iVar4 + 0xbc) = *(uint *)(iVar4 + 0xbc) & 0x7fffffff | puVar1[2] & 0x80000000;
    *(uint *)(iVar4 + 200) = *(uint *)(iVar4 + 200) & 0xfdffffff | *puVar3 & 0x2000000;
    *(uint *)(iVar4 + 200) = *(uint *)(iVar4 + 200) & 0xc3ffffff | *puVar3 & 0x3c000000;
    *(uint *)(iVar4 + 200) = *(uint *)(iVar4 + 200) & 0xbfffffff | *puVar3 & 0x40000000;
    *(uint *)(iVar4 + 200) = *(uint *)(iVar4 + 200) & 0x7fffffff | *puVar3 & 0x80000000;
    *(uint *)(iVar5 + 0x9c) = *(uint *)(iVar5 + 0x9c) & 0xffdfffff | puVar3[1] & 0x200000;
    *(uint *)(iVar5 + 0x9c) = *(uint *)(iVar5 + 0x9c) & 0xf87fffff | puVar3[1] & 0x7800000;
    *(uint *)(iVar5 + 0xa0) = *(uint *)(iVar5 + 0xa0) & 0x3ffffff | puVar3[2] & 0xfc000000;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_esp_hw_support__ram_4ff54ff0 + 0x2d,0x70,
                   s_pmu_lp_system_init_ram_4ff53b48,s_ctx_>hal_ram_4ff54fe4);
}


