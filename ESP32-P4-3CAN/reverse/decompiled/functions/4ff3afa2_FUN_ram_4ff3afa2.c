/* Firmware entry: 0x4ff3afa2 */

undefined4 FUN_ram_4ff3afa2(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int aiStack_34 [3];
  undefined1 auStack_28 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  aiStack_34[0] = param_3;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x3a8,"xQueueGenericSend","pxQueue");
  }
  if ((param_2 == 0) && (*(int *)(param_1 + 0x40) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x3a9,"xQueueGenericSend",
                     "!( ( pvItemToQueue == ((void *)0) ) && ( pxQueue->uxItemSize != ( UBaseType_t ) 0U ) )"
                    );
  }
  if ((param_4 == 2) && (*(int *)(param_1 + 0x3c) != 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x3aa,"xQueueGenericSend",
                     "!( ( xCopyPosition == ( ( BaseType_t ) 2 ) ) && ( pxQueue->uxLength != 1 ) )")
    ;
  }
  iVar1 = FUN_ram_4ff3d9d2();
  if ((iVar1 == 0) && (aiStack_34[0] != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x3ad,"xQueueGenericSend",
                     "!( ( xTaskGetSchedulerState() == ( ( BaseType_t ) 0 ) ) && ( xTicksToWait != 0 ) )"
                    );
  }
  iVar1 = param_1 + 0x54;
  FUN_ram_4ff3ec14(iVar1,0xffffffff);
  if (*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 0x3c)) {
LAB_ram_4ff3b04c:
    iVar4 = *(int *)(param_1 + 0x38);
    iVar2 = FUN_ram_4ff3aa88(param_1,param_2,param_4);
    if (*(int *)(param_1 + 0x48) == 0) goto LAB_ram_4ff3b09c;
    if (param_4 == 2) goto LAB_ram_4ff3b096;
LAB_ram_4ff3b064:
    iVar2 = FUN_ram_4ff3ab28(param_1);
  }
  else {
    if (param_4 != 2) {
      bVar3 = false;
      do {
        if (aiStack_34[0] == 0) {
LAB_ram_4ff3b034:
          FUN_ram_4ff3ee10(iVar1);
          return 0;
        }
        if (bVar3) {
          iVar2 = FUN_ram_4ff3d546(auStack_28,aiStack_34);
        }
        else {
          FUN_ram_4ff3d530(auStack_28);
          iVar2 = FUN_ram_4ff3d546(auStack_28,aiStack_34);
        }
        if (iVar2 != 0) goto LAB_ram_4ff3b034;
        FUN_ram_4ff3d026(param_1 + 0x10,aiStack_34[0]);
        FUN_ram_4ff3ef0e();
        FUN_ram_4ff3ee10(iVar1);
        FUN_ram_4ff3ec14(iVar1,0xffffffff);
        bVar3 = true;
      } while (*(uint *)(param_1 + 0x3c) <= *(uint *)(param_1 + 0x38));
      goto LAB_ram_4ff3b04c;
    }
    iVar4 = *(int *)(param_1 + 0x38);
    iVar2 = FUN_ram_4ff3aa88(param_1,param_2,2);
    if (*(int *)(param_1 + 0x48) != 0) {
LAB_ram_4ff3b096:
      if (iVar4 != 0) goto LAB_ram_4ff3b06c;
      goto LAB_ram_4ff3b064;
    }
LAB_ram_4ff3b09c:
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar2 = FUN_ram_4ff3d1ec(param_1 + 0x24);
    }
  }
  if (iVar2 != 0) {
    FUN_ram_4ff3ef0e();
  }
LAB_ram_4ff3b06c:
  FUN_ram_4ff3ee10(iVar1);
  return 1;
}


