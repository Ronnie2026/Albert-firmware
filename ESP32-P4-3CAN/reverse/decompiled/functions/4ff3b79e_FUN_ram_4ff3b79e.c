/* Firmware entry: 0x4ff3b79e */

undefined4 FUN_ram_4ff3b79e(undefined4 *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int aiStack_34 [3];
  undefined1 auStack_28 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  aiStack_34[0] = param_3;
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x7b8,"xQueuePeek","( pxQueue )");
  }
  if ((param_2 == 0) && (param_1[0x10] != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x7bc,"xQueuePeek",
                     "!( ( ( pvBuffer ) == ((void *)0) ) && ( ( pxQueue )->uxItemSize != ( UBaseType_t ) 0U ) )"
                    );
  }
  iVar3 = FUN_ram_4ff3d9d2();
  if ((iVar3 == 0) && (aiStack_34[0] != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x7c1,"xQueuePeek",
                     "!( ( xTaskGetSchedulerState() == ( ( BaseType_t ) 0 ) ) && ( xTicksToWait != 0 ) )"
                    );
  }
  bVar1 = false;
  puVar2 = param_1 + 0x15;
  while( true ) {
    FUN_ram_4ff3ec14(puVar2,0xffffffff);
    if (param_1[0xe] != 0) {
      iVar3 = param_1[3];
      if (param_1[0x10] != 0) {
        uVar4 = iVar3 + param_1[0x10];
        param_1[3] = uVar4;
        if ((uint)param_1[2] <= uVar4) {
          param_1[3] = *param_1;
        }
        FUN_ram_4ff45158(param_2);
      }
      param_1[3] = iVar3;
      if ((param_1[9] != 0) && (iVar3 = FUN_ram_4ff3d1ec(param_1 + 9), iVar3 != 0)) {
        FUN_ram_4ff3ef0e();
      }
      FUN_ram_4ff3ee10(puVar2);
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
    if (iVar3 != 0) break;
    bVar1 = true;
    FUN_ram_4ff3d026(param_1 + 9,aiStack_34[0]);
    FUN_ram_4ff3ef0e();
    FUN_ram_4ff3ee10(puVar2);
  }
  FUN_ram_4ff3ee10(puVar2);
  return 0;
}


