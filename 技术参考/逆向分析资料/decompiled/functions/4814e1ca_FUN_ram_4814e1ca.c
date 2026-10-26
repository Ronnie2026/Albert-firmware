/* Firmware entry: 0x4814e1ca */

undefined4
FUN_ram_4814e1ca(int *param_1,int param_2,int param_3,undefined1 *param_4,int *param_5,
                undefined4 *param_6)

{
  uint *puVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != 0x29) {
    return 0;
  }
  if (param_3 == 0x301) {
    FUN_ram_4819ac1a("IPV6_MULTICAST_HOPS");
    if (((*param_5 != 0) && (puVar1 = (uint *)*param_1, puVar1 != (uint *)0x0)) && (puVar1[2] != 0))
    {
      if ((*puVar1 & 0xf0) == 0x20) {
        *param_4 = *(undefined1 *)(puVar1[2] + 0x45);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 1;
      }
LAB_ram_4814e20e:
      *param_6 = 0x6d;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 1;
    }
  }
  else if (param_3 == 0x302) {
    if (((*param_5 != 0) && (*param_1 != 0)) && (iVar2 = *(int *)(*param_1 + 8), iVar2 != 0)) {
      if ((*(byte *)(iVar2 + 0x38) & 8) != 0) {
        *param_4 = 1;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 1;
      }
      *param_4 = 0;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 1;
    }
  }
  else {
    if (param_3 != 0x300) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    if (((*param_5 != 0) && (puVar1 = (uint *)*param_1, puVar1 != (uint *)0x0)) && (puVar1[2] != 0))
    {
      if ((*puVar1 & 0xf0) == 0x20) {
        *param_4 = *(undefined1 *)(puVar1[2] + 0x44);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 1;
      }
      goto LAB_ram_4814e20e;
    }
  }
  *param_6 = 0x16;
  return 1;
}


