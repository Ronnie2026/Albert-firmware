/* Firmware entry: 0x4815cefa */

int FUN_ram_4815cefa(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uStack_44;
  undefined1 auStack_40 [2];
  byte bStack_3e;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(param_1 + 100);
  *param_3 = 0;
  if (iVar2 != 1) {
    return 0x1101;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  do {
    if (iVar2 == 0) {
      return 0;
    }
    uStack_44 = 0;
    do {
      iVar1 = FUN_ram_4815af12(iVar2,param_2,0xff,0,&uStack_44,auStack_40,0xff);
      if (iVar1 == 0x1102) break;
      if (iVar1 != 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar1;
      }
      uStack_44 = bStack_3e + uStack_44;
      *param_3 = *param_3 + (uint)bStack_3e;
    } while (uStack_44 < 0x7e);
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}


