/* Firmware entry: 0x4ff3b204 */

/* WARNING: Removing unreachable block (ram,0x4ff3b28c) */

undefined4 * FUN_ram_4ff3b204(undefined1 param_1,undefined4 *param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_2[0xf] = 1;
    *param_2 = param_2;
    param_2[0x10] = 0;
    FUN_ram_4ff3abd4(param_2);
    *(undefined1 *)(param_2 + 0x14) = param_1;
    param_2[0x12] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[0x16] = 0;
    param_2[0x15] = 0xb33fffff;
    FUN_ram_4ff3afa2(param_2,0,0,0);
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("queue.c",0x19f,"xQueueGenericCreateStatic","pxStaticQueue");
}


