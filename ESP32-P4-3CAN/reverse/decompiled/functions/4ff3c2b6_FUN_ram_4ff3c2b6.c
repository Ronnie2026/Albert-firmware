/* Firmware entry: 0x4ff3c2b6 */

void FUN_ram_4ff3c2b6(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    FUN_ram_4ff3ef0e();
    return;
  }
  FUN_ram_4ff3ebfe();
  if (DAT_ram_4ff6da20 != 0) {
    if ((&DAT_ram_4ff6d9f8)[mhartid] != 0) {
      FUN_ram_4ff3ec08();
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tasks.c",0x632,"vTaskDelay",
                       "( ( xTaskGetSchedulerState() == ( ( BaseType_t ) 0 ) ) ? ( ( BaseType_t ) 1 ) : ( ( BaseType_t ) 0 ) ) == ( ( BaseType_t ) 0 )"
                      );
    }
  }
  FUN_ram_4ff3ec08();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  FUN_ram_4ff3bbea(param_1,0);
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  FUN_ram_4ff3ef0e();
  return;
}


