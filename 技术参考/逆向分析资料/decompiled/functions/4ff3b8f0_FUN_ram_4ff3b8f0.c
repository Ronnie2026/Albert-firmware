/* Firmware entry: 0x4ff3b8f0 */

undefined4 FUN_ram_4ff3b8f0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x86d,"xQueueReceiveFromISR","pxQueue");
  }
  if ((param_2 == 0) && (param_1[0x10] != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x86e,"xQueueReceiveFromISR",
                     "!( ( pvBuffer == ((void *)0) ) && ( pxQueue->uxItemSize != ( UBaseType_t ) 0U ) )"
                    );
  }
  FUN_ram_4ff3ec14(param_1 + 0x15,0xffffffff);
  iVar2 = param_1[0xe];
  uVar3 = 0;
  if (iVar2 != 0) {
    if (param_1[0x10] != 0) {
      uVar1 = param_1[3] + param_1[0x10];
      param_1[3] = uVar1;
      if ((uint)param_1[2] <= uVar1) {
        param_1[3] = *param_1;
      }
      FUN_ram_4ff45158(param_2);
    }
    param_1[0xe] = iVar2 + -1;
    if (((param_1[4] == 0) || (iVar2 = FUN_ram_4ff3d1ec(param_1 + 4), iVar2 == 0)) ||
       (param_3 == (undefined4 *)0x0)) {
      uVar3 = 1;
    }
    else {
      *param_3 = 1;
      uVar3 = 1;
    }
  }
  FUN_ram_4ff3ee10(param_1 + 0x15);
  return uVar3;
}


