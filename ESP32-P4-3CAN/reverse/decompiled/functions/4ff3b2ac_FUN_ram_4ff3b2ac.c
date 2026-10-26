/* Firmware entry: 0x4ff3b2ac */

undefined4 FUN_ram_4ff3b2ac(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x49c,"xQueueGenericSendFromISR","pxQueue");
  }
  if ((param_2 == 0) && (*(int *)(param_1 + 0x40) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x49d,"xQueueGenericSendFromISR",
                     "!( ( pvItemToQueue == ((void *)0) ) && ( pxQueue->uxItemSize != ( UBaseType_t ) 0U ) )"
                    );
  }
  if (param_4 == 2) {
    if (*(int *)(param_1 + 0x3c) != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("queue.c",0x49e,"xQueueGenericSendFromISR",
                       "!( ( xCopyPosition == ( ( BaseType_t ) 2 ) ) && ( pxQueue->uxLength != 1 ) )"
                      );
    }
    FUN_ram_4ff3ec14(param_1 + 0x54,0xffffffff);
    iVar1 = *(int *)(param_1 + 0x38);
    FUN_ram_4ff3aa88(param_1,param_2,2);
    if (*(int *)(param_1 + 0x48) == 0) {
LAB_ram_4ff3b324:
      uVar2 = 1;
      if (((*(int *)(param_1 + 0x24) != 0) && (iVar1 = FUN_ram_4ff3d1ec(param_1 + 0x24), iVar1 != 0)
          ) && (param_3 != (undefined4 *)0x0)) {
        *param_3 = 1;
      }
      goto LAB_ram_4ff3b2e4;
    }
    uVar2 = 1;
    if (iVar1 != 0) goto LAB_ram_4ff3b2e4;
  }
  else {
    FUN_ram_4ff3ec14(param_1 + 0x54,0xffffffff);
    uVar2 = 0;
    if (*(uint *)(param_1 + 0x3c) <= *(uint *)(param_1 + 0x38)) goto LAB_ram_4ff3b2e4;
    FUN_ram_4ff3aa88(param_1,param_2,param_4);
    if (*(int *)(param_1 + 0x48) == 0) goto LAB_ram_4ff3b324;
  }
  iVar1 = FUN_ram_4ff3ab28(param_1);
  uVar2 = 1;
  if (iVar1 != 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    uVar2 = 1;
  }
LAB_ram_4ff3b2e4:
  FUN_ram_4ff3ee10(param_1 + 0x54);
  return uVar2;
}


