/* Firmware entry: 0x4ff3f36a */

void FUN_ram_4ff3f36a(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff3f268(0x800);
  iVar2 = FUN_ram_4ff3f268(0x160);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("port_common.c",0x60,"vApplicationGetTimerTaskMemory","pxTCBBufferTemp != NULL"
                    );
  }
  if (iVar1 != 0) {
    *param_1 = iVar2;
    *param_2 = iVar1;
    *param_3 = 0x800;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("port_common.c",0x61,"vApplicationGetTimerTaskMemory","pxStackBufferTemp != NULL"
                  );
}


