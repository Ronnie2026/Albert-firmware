/* Firmware entry: 0x4ff3c10a */

void FUN_ram_4ff3c10a(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  iVar1 = mhartid;
  if (param_1 == 0) {
    FUN_ram_4ff3ebfe();
    param_1 = (&DAT_ram_4ff6da3c)[mhartid];
    FUN_ram_4ff3ec08();
  }
  iVar3 = param_1 + 4;
  FUN_ram_4ff3fb48(iVar3);
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_ram_4ff3fb48(param_1 + 0x18);
  }
  DAT_ram_4ff6da0c = DAT_ram_4ff6da0c + 1;
  if ((&DAT_ram_4ff6da3c)[iVar1] == param_1) {
    FUN_ram_4ff3faf8(&DAT_ram_4ff58bc0,iVar3);
    DAT_ram_4ff6da30 = DAT_ram_4ff6da30 + 1;
    FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
    FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
    if (DAT_ram_4ff6da20 != 0) {
      FUN_ram_4ff3ebfe();
      if ((DAT_ram_4ff6da20 != 0) && ((&DAT_ram_4ff6d9f8)[mhartid] != 0)) {
        FUN_ram_4ff3ec08();
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tasks.c",0x5c2,"vTaskDelete",
                         "( ( xTaskGetSchedulerState() == ( ( BaseType_t ) 0 ) ) ? ( ( BaseType_t ) 1 ) : ( ( BaseType_t ) 0 ) ) == ( ( BaseType_t ) 0 )"
                        );
      }
      FUN_ram_4ff3ec08();
      FUN_ram_4ff3ef0e();
    }
  }
  else {
    uVar2 = (uint)(iVar1 == 0);
    if ((&DAT_ram_4ff6da3c)[uVar2] == param_1) {
      FUN_ram_4ff3faf8(&DAT_ram_4ff58bc0,iVar3);
      DAT_ram_4ff6da30 = DAT_ram_4ff6da30 + 1;
      thunk_FUN_ram_4ff2ca00(uVar2);
      FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
    }
    else {
      DAT_ram_4ff6da2c = DAT_ram_4ff6da2c + -1;
      if (*DAT_ram_4ff6da38 == 0) {
        DAT_ram_4ff6da08 = 0xffffffff;
        FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
      }
      else {
        DAT_ram_4ff6da08 = *(undefined4 *)DAT_ram_4ff6da38[3];
        FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
      }
      FUN_ram_4ff3bf10(param_1);
    }
    FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return;
}


