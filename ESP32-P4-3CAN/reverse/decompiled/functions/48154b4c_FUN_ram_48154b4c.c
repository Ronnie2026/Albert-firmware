/* Firmware entry: 0x48154b4c */

void FUN_ram_48154b4c(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4814ceda(param_1,0x5dc,0xffffffff,0,0);
  if ((-1 < iVar2) &&
     (iVar2 = FUN_ram_4814cef8(param_1,0x5dc,(*param_1 >> 3 & 1) - 1,param_1[0x10] >> 5 & 1,
                               param_1[0x10] >> 6 & 1), -1 < iVar2)) {
    *(undefined2 *)(param_1 + 0x34) = 0x5dc;
    puVar1 = param_1 + 9;
    if (*(short *)((int)param_1 + 2) != 0) {
      *(byte *)((int)param_1 + 0x35) = *(byte *)((int)param_1 + 0x35) | 0x80;
      FUN_ram_4814268a(&LAB_ram_481549e8,puVar1);
      FUN_ram_48142636(*(undefined2 *)((int)param_1 + 2),&LAB_ram_481549e8,puVar1);
      return;
    }
    FUN_ram_48155dde(puVar1);
    return;
  }
  return;
}


