/* Firmware entry: 0x4ff3b5f0 */

undefined4 FUN_ram_4ff3b5f0(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int aiStack_34 [3];
  undefined1 auStack_28 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  aiStack_34[0] = param_2;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x6ad,"xQueueSemaphoreTake","( pxQueue )");
  }
  if (param_1[0x10] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x6b1,"xQueueSemaphoreTake","pxQueue->uxItemSize == 0");
  }
  iVar2 = FUN_ram_4ff3d9d2();
  if ((iVar2 == 0) && (aiStack_34[0] != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x6b6,"xQueueSemaphoreTake",
                     "!( ( xTaskGetSchedulerState() == ( ( BaseType_t ) 0 ) ) && ( xTicksToWait != 0 ) )"
                    );
  }
  bVar1 = false;
  iVar2 = 0;
  piVar4 = param_1 + 0x15;
  while( true ) {
    FUN_ram_4ff3ec14(piVar4,0xffffffff);
    if (param_1[0xe] != 0) {
      param_1[0xe] = param_1[0xe] + -1;
      if (*param_1 == 0) {
        iVar2 = FUN_ram_4ff3def8();
        param_1[2] = iVar2;
      }
      if ((param_1[4] != 0) && (iVar2 = FUN_ram_4ff3d1ec(param_1 + 4), iVar2 != 0)) {
        FUN_ram_4ff3ef0e();
      }
      FUN_ram_4ff3ee10(piVar4);
      return 1;
    }
    if (aiStack_34[0] == 0) break;
    if (bVar1) {
      iVar3 = FUN_ram_4ff3d546(auStack_28,aiStack_34);
    }
    else {
      FUN_ram_4ff3d530(auStack_28);
      iVar3 = FUN_ram_4ff3d546(auStack_28,aiStack_34);
    }
    if (iVar3 != 0) {
      if (iVar2 != 0) {
        iVar2 = 0;
        if (param_1[9] != 0) {
          iVar2 = 0x19 - *(int *)param_1[0xc];
        }
        FUN_ram_4ff3dc16(param_1[2],iVar2);
      }
      break;
    }
    if (*param_1 == 0) {
      iVar2 = FUN_ram_4ff3da0e(param_1[2]);
    }
    bVar1 = true;
    FUN_ram_4ff3d026(param_1 + 9,aiStack_34[0]);
    FUN_ram_4ff3ef0e();
    FUN_ram_4ff3ee10(piVar4);
  }
  FUN_ram_4ff3ee10(piVar4);
  return 0;
}


