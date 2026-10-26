/* Firmware entry: 0x481a2d88 */

undefined4 FUN_ram_481a2d88(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((int *)param_2[0xd] == param_2 + 0x11) {
    iVar1 = FUN_ram_4ff450d0(param_1,0x80);
    if (iVar1 != 0) {
      param_2[0xe] = 0x80;
      param_2[0xd] = iVar1;
      *(undefined1 *)(iVar1 + 0x7f) = *(undefined1 *)((int)param_2 + 0x46);
      *(undefined1 *)(iVar1 + 0x7e) = *(undefined1 *)((int)param_2 + 0x45);
      *(undefined1 *)(iVar1 + 0x7d) = (char)param_2[0x11];
      *param_2 = iVar1 + 0x7d;
LAB_ram_481a2db2:
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
  }
  else {
    iVar2 = param_2[0xe];
    iVar1 = FUN_ram_4ff450c8(param_1,(int *)param_2[0xd],iVar2 << 1);
    if (iVar1 != 0) {
      FUN_ram_4ff45158(iVar1 + iVar2,iVar1,iVar2);
      *param_2 = iVar1 + iVar2;
      param_2[0xd] = iVar1;
      param_2[0xe] = iVar2 << 1;
      goto LAB_ram_481a2db2;
    }
  }
  return 0xffffffff;
}


