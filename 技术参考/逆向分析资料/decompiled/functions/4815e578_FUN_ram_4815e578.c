/* Firmware entry: 0x4815e578 */

void FUN_ram_4815e578(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  uStack_10 = param_5;
  uStack_c = param_6;
  uStack_8 = param_7;
  uStack_4 = param_8;
  iVar1 = FUN_ram_4ff3e8de();
  FUN_ram_48199edc(*(undefined4 *)(iVar1 + 0xc),param_1,&uStack_1c);
  pcVar2 = (char *)FUN_ram_481962e6("EF_DUMPCORE");
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    FUN_ram_481962c2(1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06();
}


