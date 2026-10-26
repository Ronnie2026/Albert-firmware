/* Firmware entry: 0x4ff3abd4 */

undefined4 FUN_ram_4ff3abd4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x14d,"xQueueGenericReset","pxQueue");
  }
  if (param_2 == 1) {
    param_1[0x16] = 0;
    param_1[0x15] = -0x4cc00001;
  }
  if (param_1[0xf] != 0) {
    if ((int)((ulonglong)(uint)param_1[0xf] * (ulonglong)(uint)param_1[0x10] >> 0x20) == 0) {
      FUN_ram_4ff3ec14(param_1 + 0x15,0xffffffff);
      iVar1 = *param_1;
      param_1[0xe] = 0;
      iVar2 = param_1[0x10] * param_1[0xf];
      param_1[1] = iVar1;
      param_1[2] = iVar2 + iVar1;
      param_1[3] = iVar1 + (iVar2 - param_1[0x10]);
      if (param_2 == 0) {
        if ((param_1[4] != 0) && (iVar1 = FUN_ram_4ff3d1ec(param_1 + 4), iVar1 != 0)) {
          FUN_ram_4ff3ef0e();
        }
      }
      else {
        FUN_ram_4ff3fade(param_1 + 4);
        FUN_ram_4ff3fade(param_1 + 9);
      }
      FUN_ram_4ff3ee10(param_1 + 0x15);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("queue.c",0x18b,"xQueueGenericReset","xReturn != ( ( ( BaseType_t ) 0 ) )");
}


