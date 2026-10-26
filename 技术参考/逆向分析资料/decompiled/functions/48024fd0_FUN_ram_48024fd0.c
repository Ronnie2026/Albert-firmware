/* Firmware entry: 0x48024fd0 */

void FUN_ram_48024fd0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_48001f52();
  FUN_ram_48002030(&uStack_2c,param_1);
  FUN_ram_48027528("%s Memory Info:\n",param_2);
  FUN_ram_48027528("------------------------------------------\n");
  uVar2 = __extendsfdf2((float)uVar1);
  uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_ram_481f4ca0,DAT_ram_481f4ca4);
  FUN_ram_48027528("  Total Size        : %8u B (%6.1f KB)\n",uVar1,(int)uVar2,
                   (int)((ulonglong)uVar2 >> 0x20));
  uVar2 = __extendsfdf2((float)uStack_2c);
  uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_ram_481f4ca0,DAT_ram_481f4ca4);
  FUN_ram_48027528("  Free Bytes        : %8u B (%6.1f KB)\n",uStack_2c,(int)uVar2,
                   (int)((ulonglong)uVar2 >> 0x20));
  uVar2 = __extendsfdf2((float)uStack_28);
  uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_ram_481f4ca0,DAT_ram_481f4ca4);
  FUN_ram_48027528("  Allocated Bytes   : %8u B (%6.1f KB)\n",uStack_28,(int)uVar2,
                   (int)((ulonglong)uVar2 >> 0x20));
  uVar2 = __extendsfdf2((float)uStack_20);
  uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_ram_481f4ca0,DAT_ram_481f4ca4);
  FUN_ram_48027528("  Minimum Free Bytes: %8u B (%6.1f KB)\n",uStack_20,(int)uVar2,
                   (int)((ulonglong)uVar2 >> 0x20));
  uVar2 = __extendsfdf2((float)uStack_24);
  uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_ram_481f4ca0,DAT_ram_481f4ca4);
  FUN_ram_48027528("  Largest Free Block: %8u B (%6.1f KB)\n",uStack_24,(int)uVar2,
                   (int)((ulonglong)uVar2 >> 0x20));
  return;
}


